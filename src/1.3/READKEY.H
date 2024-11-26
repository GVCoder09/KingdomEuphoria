void readkey(void)
{
  char ch;
  ch = getch();
#ifdef WIN32 || WIN64
  if (ch == 224)
    getch();
#else
  if (ch == 0)
    getch();
#endif
}
