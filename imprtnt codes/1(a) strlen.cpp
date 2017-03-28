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
int main()
{
    char a[1000];
    gets(a);
    cout<<strlen(a)<<endl;
}
