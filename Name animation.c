#include <stdio.h>
#include<windows.h>
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
int main()
{
    int i,t=150;
    for(i=0; i<=17; i++)
    {
        gotoxy(94,i);
        printf("~");fflush(stdout);
        Sleep(10);
    }
     for(i=0; i<=17; i++)
    {
        gotoxy(0,i);
        printf("~");fflush(stdout);
        Sleep(10);
    }
     for(i=0; i<=94; i++)
    {
        gotoxy(i,0);
        printf("<");fflush(stdout);
        Sleep(10);
    }
     for(i=0; i<=94; i++)
    {
        gotoxy(i,18);
        printf(">");fflush(stdout);
        Sleep(10);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(i+3,2);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(19-i,1+i);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(i+3,16);
        printf("*");fflush(stdout);
        Sleep(t);
    }
for(i=1; i<=15; i++)
    {
        gotoxy(21,1+i);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(21+i,8);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(36,1+i);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(21+i,2);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(39,1+i);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(39+i,8);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(54,1+i);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(57,1+i);
        printf("*");fflush(stdout);
        Sleep(t);
    }
     for(i=1; i<=15; i++)
    {
        gotoxy(57+i,8);
        printf("*");fflush(stdout);
        Sleep(t);
    }
     for(i=1; i<=15; i++)
    {
        gotoxy(57+i,2);
        printf("*");fflush(stdout);
        Sleep(t);
    }
     for(i=1; i<=15; i++)
    {
        gotoxy(57+i,16);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(75,1+i);
        printf("*");fflush(stdout);
        Sleep(t);
    }
    for(i=1; i<=15; i++)
    {
        gotoxy(75+i,2);
        printf("*");fflush(stdout);
        Sleep(t);
    }
        for(i=1; i<=15; i++)
    {
        gotoxy(90,1+i);
        printf("*");fflush(stdout);
        Sleep(t);
    }
     for(i=1; i<=15; i++)
    {
        gotoxy(75+i,16);
        printf("*");fflush(stdout);
        Sleep(t);
    }

getchar();
return 0;
    }
