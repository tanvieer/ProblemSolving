#include<iostream>
#include<cstdio>
using namespace std;
int strlen(char a[])
{
    int i=0;
    while(a[i]!=NULL)
        i++;
    return i;
}
string strcat(char *a,char *b)
{
    int i,j=0;
    i=strlen(a);
    while(b[j]!=NULL)
    {
        a[i+j]=b[j];
        j++;
    }
    a[i+j]=NULL;
    return a;
}
int main()
{
    char a[1000],b[1000];
    gets(a);
    gets(b);
    strcat(a,b);
    cout<<a<<endl;
}


