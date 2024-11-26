#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void find_ext (char *path, FILETIME *lt, char *filename)
{
  HANDLE h;
  long res;
  WIN32_FIND_DATA fd;
  char s[MAX_PATH];

  sprintf (s, "%s%c*.*", path, path_separator);
  h = FindFirstFile (s, &fd);
  if (h == INVALID_HANDLE_VALUE)
  {
//    printf ("FindFirstFile failed (%d) %s\n", GetLastError(), s);
    return;
  }

  do
  {
    if (fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY)
    {
      if (strcmp (fd.cFileName, ".") != 0 && strcmp (fd.cFileName, "..") != 0)
      {
        sprintf (s, "%s%c%s", path, path_separator, fd.cFileName);
        find_ext (s, lt, filename);
      }
    }
    else
    {
      if (CompareFileTime (&fd.ftLastWriteTime, lt) == 1)
      {
        *lt = fd.ftLastWriteTime;
        sprintf (s, "%s%c%s", path, path_separator, fd.cFileName);
        strcpy (filename, s);
      }
    }
  }
  while (FindNextFile (h, &fd) != 0);

  FindClose (h);
}

const char *find_last (char *path)
{
  FILETIME lasttime;
  static char filename[_MAX_PATH+1];
  filename[0] = 0;
  memset (&lasttime, 0, sizeof (lasttime));
  find_ext (path, &lasttime, filename);
  return filename;
}

/*
 * void main()
 * {
 *  printf ("%s\n", find_last ("SAVE"));
 * }
 */
