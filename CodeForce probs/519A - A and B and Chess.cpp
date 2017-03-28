#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,w=0,b=0;
    char s[100];
    for(i=0;i<64;i++)
    {
        cin>>s[i];
        if(s[i]=='q')
        {
            b+=9;
        }
        else if(s[i]=='Q')
        {
            w+=9;
        }
        else if(s[i]=='r')
        {
            b+=5;
        }
        else if(s[i]=='R')
        {
            w+=5;
        }
        else if(s[i]=='b')
        {
            b+=3;
        }
        else if(s[i]=='B')
        {
            w+=3;
        }
        else if(s[i]=='n')
        {
            b+=3;
        }
        else if(s[i]=='N')
        {
            w+=3;
        }
        else if(s[i]=='p')
        {
            b+=1;
        }
        else if(s[i]=='P')
        {
            w+=1;
        }
    }
    if(b==w)
        cout<<"Draw"<<endl;
    else if(b>w)
        cout<<"Black"<<endl;
    else
        cout<<"White"<<endl;

}
