#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    double n,  d[] = {100.0,50.0,20.0,10.0,5.0,2.0}, m[] = {1.0,0.5,0.25,0.10,0.05,0.01};
    int t = 0, c;

    cin>>n;
    cout<<"NOTAS:"<<endl;
    do {
        cout<<(int)n/(int)d[t]<<fixed<<setprecision(2)<<" nota(s) de R$ "<<d[t]<<endl;
        if (n >= d[t])
            n -= d[t]*(int)(n/d[t]);
    } while(d[t++] != 2.0);

    t = 0;
    cout<<"MOEDAS:"<<endl;
    do {
        c = 0;
        while(n >= m[t]){
            n -= m[t];
            c++;
        }
        cout<<c<<fixed<<setprecision(2)<<" moeda(s) de R$ "<<m[t]<<endl;
        t++;
    } while(n >= 0.01);
}
