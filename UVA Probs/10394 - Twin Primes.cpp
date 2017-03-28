#include<iostream>
#include<math.h>
using namespace std;
#define M 20000001

bool prime[M];
int tprime[M];
void primeNum(){
    prime[1]==true;
    for(int i=2;i<=sqrt(M);i++){
        if(prime[i]==false)

        for(long long int j=i+i; j<=M ; j+=i){
            prime[j]=true;
        }
    }

}
void twin_prime()
{
    int j=1;
    for(int i = 3;i<=20000000;i++){
        if(!prime[i] && !prime[i+2])
        {
            tprime[j++] = i;
        }
    }
}

int main()
{
    int t;
    primeNum();
    twin_prime();
    while(cin>>t)
   {
       cout<<"("<<tprime[t]<<","<<(char)32<<tprime[t]+2<<")"<<endl;
   }
}

