/**/
// Fibonacci
#include<bits/stdc++.h>
int vi[100]= {0};
int dp[100];
using namespace std;

int fib(int x)
{
    if(x<=1)
        return 1;
    if(vi[x])
        return dp[x];
    dp[x]=fib(x-1)+fib(x-2);
    vi[x]=1;
    return dp[x];
}
int main()
{
  //  for(int i=1; i<=5; i++)
        cout<<10*fib(2+1)<<endl;
}
/*

#include<bits/stdc++.h>
//int vi[100]={0};
//int dp[100];
using namespace std;

int fib(int x)
{
    if(x<=1)
        return 1;
   // if(vi[x])
  //      return dp[x];
    return fib(x-1)+fib(x-2);
    //vi[x]=1;
  //  return dp[x];
}
int main()
{
    for(int i=1;i<=5;i++)
    cout<<fib(i)<<" ";
}
*/
