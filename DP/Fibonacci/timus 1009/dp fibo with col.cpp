
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

    dp[x][col]=fib(x-1,col)+fib(x-2,col);
    vi[x][col]=1;
   // cout<<dp[x]<<" ";
    return dp[x][col];
}
int main()
{
    cout<<fib(10,2)<<endl;
}
