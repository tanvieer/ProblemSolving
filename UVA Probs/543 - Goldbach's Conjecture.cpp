#include<bits/stdc++.h>
using namespace std;
#define M 1000000
bool prime[M];

void primeNum(){
    for(int i=2;i<=sqrt(M);i++){
        if(prime[i]==false)

        for(int j=i+i; j<=M ; j+=i){
            prime[j]=true;
        }
    }

}

int main()
{
    primeNum();
    int n,a,b,i,j;
    start:
    while(cin>>n && n>0)
    {
        for(i=2,j=n-2;i<=n/2;i++,j--)
        {
            if(!prime[i] && !prime[j])
          {
            if(i+j==n)
            {
                cout<<n<<" = "<<i<<" + "<<j<<endl;
                goto start;
            }
          }
        }
        cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
