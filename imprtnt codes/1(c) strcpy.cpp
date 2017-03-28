#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int strlen(char a[])
{
    int i=0;
    while(a[i]!=NULL)
        i++;
    return i;
}
string strcpy(char *a,char *b)
{
    int i=0,l1,l2;
    l1=strlen(a);
    l2=strlen(b);
    l1=max(l1,l2);
    while(i!=l1)
    {
        a[i]=b[i];
        i++;
    }
    a[i]=NULL;
    return a;
}
int main()
{
    char a[1000],b[1000];
    gets(a);
    gets(b);
    strcpy(a,b);
    cout<<a<<endl;
}

