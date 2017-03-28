#include <iostream>
using namespace std;

#define M 10000

bool prime[M];

void primeNum(){
    for(int i=2;i<=M;i++){
        if(prime[i]==false)

        for(int j=i+i; j<=M ; j+=i){
            prime[j]=true;
        }
    }

}


int main () {
    int a;
    primeNum();
    while(cin>>a){

    if(prime[a]==false)
        cout<<a<<" is a prime"<<endl;
    else
        cout<<a<<" is not a prime"<<endl;
    }
return 0;
}
