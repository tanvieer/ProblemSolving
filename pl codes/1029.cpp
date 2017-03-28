#include<iostream>
using namespace std;
long long int f[39];
long long int r[39];

long long int fib(long long int n){
    if (f[n]!=-1)
        return f[n];
    if(n==0)
      f[n]=0;
    else if(n==1)
        f[n]= 1;
    else {
        f[n]=fib(n-1)+fib(n-2);
        if(n>=3)
            r[n]=r[n-1]+r[n-2]+2;
    }
    return f[n];
}

int main(){
    int i, j;
    long long int n;
    for (j=0;j<=60;j++)
        {
            f[j]=-1;r[j]=-1;
        }
    r[0]=0;
    r[1]=0;
    r[2]=2;

    cin>>i;
    while(i--){
        cin>>n;
        cout<<"fib("<<n<<") = "<<r[n]<<" calls = "<<fib(n)<<endl;
    }
}
