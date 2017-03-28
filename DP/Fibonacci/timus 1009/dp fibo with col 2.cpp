
// Fibonacci
#include<bits/stdc++.h>
int vi[100][3];
int dp[100][3];
using namespace std;

int fib(int x , int col)
{

    if(x<=1)
    {
        if(col==0)
            return 1;
        else if(col==1)
            return 2;
        else return 10;
    }

    if(vi[x][col])
    {
       //  cout<<dp[x]<<" ";
         return dp[x][col];
    }

    dp[x][col]=fib(x-1,(col+1)%3)+fib(x-2,(col+1)%3);
    vi[x][col]=1;
   // cout<<dp[x]<<" ";
    return dp[x][col];
}
int main()
{
    for(int i=0;i<=10;i++)
    cout<<fib(i,0)<<endl;
}
