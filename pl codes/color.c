#include <stdio.h>
#include <windows.h>
#define blue {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=1);}
#define green {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=2);}
#define sky {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=3);}
#define red {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=4);}
#define pink {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=5);}
#define yellow {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=6);}
#define white {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=7);}
#define ash {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=8);}
#define blue2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=9);}
#define green2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=10);}
#define sky2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=11);}
#define red2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=12);}
#define pink2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=13);}
#define yellow2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=14);}
#define white2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=15);}

int main ()

{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    int i = 0;
    i <=255;i++;
    {
        SetConsoleTextAttribute (hConsole, i=10);
        printf("\n i= 10 \n ");
    }
    {
        SetConsoleTextAttribute (hConsole, i=9);
        printf("\n i=9 \n ");
    }
    {
        SetConsoleTextAttribute (hConsole, i=8);
        printf("\n i=8 \n");
    }
    {
        SetConsoleTextAttribute (hConsole, i=7);
        printf("\n i=7 \n");
    }

    {
        SetConsoleTextAttribute (hConsole, i=6);
        printf("\n i=6");
    }

getch();
}
