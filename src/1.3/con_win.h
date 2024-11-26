#include <windows.h>

HANDLE console_output_handle;

#define init_console() console_output_handle=GetStdHandle(STD_OUTPUT_HANDLE)
#define clrscr()       system("@CLS")
#define delay(num)     Sleep(num)
#define textcolor(num) SetConsoleTextAttribute(console_output_handle,num);
#define gotoxy(x,y)    SetConsoleCursorPosition(console_output_handle,(COORD){x-1,y-1})
#define random(num)    (int)(((long)rand()*(num))/(RAND_MAX+1))
