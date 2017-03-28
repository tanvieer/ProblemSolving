#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,i;
  long long int sum=0;
  while(cin>>n)
     {
     if(n==0)
     return 0;
     for(i=1;i<=n;i++)
      {
         sum=sum+(i*i);
      }
     cout<<sum<<endl;
     sum=0;
     }
}
