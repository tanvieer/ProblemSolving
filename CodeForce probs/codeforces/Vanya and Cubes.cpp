#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,x=1,n,sm=0,tl=0,ct=0;
    cin>>n;
       while(tl<n)
          {
            sm=sm+x;
            tl=tl+sm;
            if(tl<=n)
              ct++;
            x++;
          }
      cout<<ct<<endl;
}


