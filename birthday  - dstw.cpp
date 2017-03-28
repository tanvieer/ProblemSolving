#include <bits/stdc++.h>
#include <conio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define pink {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=13);}
#define white {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=15);}
#define blue {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=9);}
#define green {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=10);}
#define sky {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=11);}
#define red {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=12);}
using namespace std;
void kutta(char *b,int age,int sym)
{
    b[age]=(char)abs(age-sym);
}
void printb(int *bd)
{
    int i=0;
    while(bd[i]!=999)
    {
        Sleep(50);
        cout<<(char)bd[i];
        i++;
    }

}
void prints(int sp)
{
    for(int i=0;i<sp;i++)
    {
        cout<<" ";
    }

}
void printl(char *s,int sk)
{
    HANDLE hConsole; hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    pink;
    for(int i=0;i<sk;i++)
    {
        Sleep(10);
        cout<<s[i];
    }
}
int main()
{HANDLE hConsole; hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char a[100];
    int bd[]={72,97,112,112,121,0,66,105,114,116,104,100,97,121,0,100,115,116,119,0,58,42,999};
    for(int i=0;i<100;i++)
        kutta(a,i,3+i);
    printl(a,80);
    printl(a,80);

for (int x=26,y=5,z=22,e=22; x>=20, z>=10, y<=17,e>=16; x-=2,y+=4,z-=4,e-=2)
    {
        printl(a,x);
        prints(y);
        printl(a,z);
        prints(y);
        printl(a,e);
    }
    printl(a,19);
    prints(20);
    printl(a,6);
    prints(20);
    printl(a,15);

    printl(a,18);
    prints(23);
    printl(a,2);
    prints(23);
    printl(a,14);

    printl(a,18);
    prints(48);
    printl(a,14);

    printl(a,18);    // text
    prints(12);
    printb(bd);
    prints(14);
    printl(a,14);


    for (int x=19,y=46,z=15;y>0;z+=2,y-=4,x+=2)
    {
        printl(a,x);
        prints(y);
        printl(a,z);
    }
    printl(a,80);
    printl(a,80);

    getch();
}
