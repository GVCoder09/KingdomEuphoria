//#include <stdio.h>
//#include <stdlib.h>
#include <dir.h>
//#include <dos.h>
//#include <string.h>

void find_ext (char *path, unsigned long *lt, char *filename)
{
  unsigned long datetime;
  struct ffblk fd;
  char s[_MAX_PATH];
  int err;

  sprintf (s, "%s%c*.*", path, path_separator);
  err = findfirst (s, &fd, FA_DIREC);
  while (err == 0)
  {
    if (fd.ff_attrib & FA_DIREC)
    {
      if (strcmp (fd.ff_name, ".") != 0 && strcmp (fd.ff_name, "..") != 0)
      {
	sprintf (s, "%s%c%s", path, path_separator, fd.ff_name);
	find_ext (s, lt, filename);
      }
    }
    else
    {
      datetime = fd.ff_fdate * 65536L + fd.ff_ftime;
      if (datetime > *lt)
      {
	*lt = datetime;
	sprintf (s, "%s%c%s", path, path_separator, fd.ff_name);
	strcpy (filename, s);
      }
    }
    err = findnext (&fd);
  }
}

const char *find_last (char *path)
{
  unsigned long lasttime;
  static char filename[_MAX_PATH+1];
  filename[0] = 0;
  lasttime = 0;
  find_ext (path, &lasttime, filename);
  return filename;
}

/* 
 * void main(void)
 * {
 *   printf ("%s\n", find_last ("SAVE"));
 * }
 */
