#include<bits/stdc++.h>
using namespace std;
int GCD(int i,int j)
{
    int a;
    while(i>0)
        {
            a=j%i;
            j=i;
            i=a;
    }
    return j;
}
int main()
{
    int i,j,n;
    while(cin>>n)
    {
        if(n==0)
        return 0;
        long long int G=0;
        for(i=1;i<n;i++){
        for(j=i+1;j<=n;j++)
            G+=GCD(i,j);
        }
        cout<<G<<endl;
    }
}
