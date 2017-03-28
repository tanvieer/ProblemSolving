#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int t,i;
    char a[1000],b[1000];
    cin>>t;
    while(t--)
    {
        scanf("%s %s",a,b);
        if(strlen(a)<strlen(b))
            cout<<"nao encaixa"<<endl;
        else if(srtstr(b,a)!=NULL)
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
    }
}
