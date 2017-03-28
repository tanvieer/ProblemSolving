#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    char *r;
    while(1)
    {
    gets(a);
    gets(b);
    r=strstr(a,b);
    puts(r);
}}
