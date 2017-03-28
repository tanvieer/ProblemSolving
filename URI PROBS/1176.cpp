#include<iostream>
#include<iomanip>
using namespace std;
long long int f[61];

long long int fib(long int n){
    if (f[n] != -1)
        return f[n];
    f[n] = fib(n - 1) + fib(n - 2);
    return f[n];
}

int main(){
    int i, j;
    long long int n;
    for (j = 0; j <= 60; j++) f[j] = -1;
    f[0] = 0;
    f[1] = 1;

    cin>>i;
    while(i--){
        cin>>setprecision(11)>>n;
        cout<<"Fib("<<setprecision(11)<<n<<") = "<<setprecision(11)<<fib(n)<<endl;
    }
}
