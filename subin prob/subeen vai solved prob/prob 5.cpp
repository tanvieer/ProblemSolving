#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[20];
    int i,ans=0,T,p;
    cin>>T;
    for(p=0;p<T;p++){
    cin>>s;
    for(i=0;i<strlen(s);i++)
    {
        ans=ans+s[i];
    }
    cout<<ans<<endl;
    ans=0;
}}
