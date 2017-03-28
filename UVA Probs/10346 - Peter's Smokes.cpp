#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,r;
    while(cin>>n>>k)
    {
        r=n;
        while(n>=k)
        {
            r+=(n/k);
            n=(n/k)+n%k;
        }
        cout<<r<<endl;
    }
}
