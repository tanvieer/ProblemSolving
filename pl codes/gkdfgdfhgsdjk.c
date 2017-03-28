#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{int i=0;
char a[]="md naheed mostofa";
char b[]="14-25632-1";
char d[]="CSE dept";
char c[]="Blood Group: O+";
char e[]="Birthday : 20 nov 1995";

char input[100];
gets(input);
if(strstr(input,"naheed")!='\0'|| strstr(input,"nahid")!='\0' || strstr(input,"mostofa")!='\0')

printf("%s\n%s\n%s\n%s\n%s",a,b,c,d,e);
Sleep(1000);
    system("G:\\ss.jpg");

}
