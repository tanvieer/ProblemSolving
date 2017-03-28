#include<iostream>
#include<cstdio>
using namespace std;
int strcmp(char a[],char b[])
{
    int r1=0,r2=0,i=0;
    while(a[i]!=NULL)
    {
        r1+=a[i];
        i++;
    }
    i=0;
    while(b[i]!=NULL)
    {
        r2+=b[i];
        i++;
    }
    if(r1==r2)
        return 0;
    else if(r1<r2)
        return -1;
    else if(r1>r2)
        return 1;
}


int main()
{
    char a[1000],b[1000];
    gets(a);
    gets(b);
    cout<<strcmp(a,b)<<endl;
}
