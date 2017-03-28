#include <bits/stdc++.h>
using namespace std;
int dp[1000000]={0};

int fibo(int x)
{
    if ( x <= 1 )
        return x;
    if( dp[x] != 0 )
        return dp[x];
    dp[x] = fibo(x-1) + fibo(x-2);
    return dp[x];
}


int main()
{
    cout<<fibo(45)<<endl;
}
