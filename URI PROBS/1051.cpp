#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float s;
    cin>>s;
    if (s <= 2000.0)
        cout<<"Isento"<<endl;
    else if (s <= 3000.0)
        cout<<"R$ "<<fixed<<setprecision(2)<<((s-2000.0)*0.08)<<endl;
    else if (s <= 4500.0)
        cout<<"R$ "<<fixed<<setprecision(2)<<(1000.0*0.08+(s-3000.0)*0.18)<<endl;
    else
        cout<<"R$ "<<fixed<<setprecision(2)<<(1000.0*0.08+1500.0*0.18+(s-4500.0)*0.28)<<endl;
}
