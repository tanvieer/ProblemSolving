#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float n;
    cin>>n;
    if (n <= 400.0)
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n*1.15<<"\nReajuste ganho: "<<setprecision(2)<<(n*1.15-n)<<"\nEm percentual: 15 %"<<endl;
    else if (n <= 800.0)
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n*1.12<<"\nReajuste ganho: "<<setprecision(2)<<(n*1.12-n)<<"\nEm percentual: 12 %"<<endl;
    else if (n <= 1200.0)
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n*1.10<<"\nReajuste ganho: "<<setprecision(2)<<(n*1.10-n)<<"\nEm percentual: 10 %"<<endl;
    else if (n <= 2000.0)
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n*1.07<<"\nReajuste ganho: "<<setprecision(2)<<(n*1.07-n)<<"\nEm percentual: 7 %"<<endl;
    else
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n*1.04<<"\nReajuste ganho: "<<setprecision(2)<<(n*1.04-n)<<"\nEm percentual: 4 %"<<endl;

}
