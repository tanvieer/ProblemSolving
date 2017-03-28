
#include<bits/stdc++.h>
int vi[100]= {0};
int k=10;
int n=2;
int dp[100];
using namespace std;

int fib(int x)
{
    if(x<=1)
        return k-1;
    if(vi[x])
        return dp[x];
    dp[x]=fib(x-1)+(k-1)*fib(x-1);
    vi[x]=1;
    return dp[x];
}
int main()
{
    //cin>>n>>k;
    cout<<fib(n)<<endl;
}
