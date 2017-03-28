#include<iostream>
using namespace std;
int main()
{
int a,ans=0,i,j;
int x[5];
     cin>>a;
       for(j=0;j<a;j++)
{
      for(i=0;i<5;i++)
      {
       cin>>x[i];
       ans=ans+x[i];
      }
    cout<<ans/5<<endl;
    ans=0;
}
}
