#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    float a,b,c,d;
    cin>>a>>b>>c;
    d=(pow(b,2)-(4*a*c));
    if(d>0 && a !=0)
        {cout<<"R1 = "<<fixed<<setprecision(5)<<(((b*(-1))+sqrt(d))/(2*a))<<endl;
        cout<<"R2 = "<<fixed<<setprecision(5)<<(((b*(-1))-sqrt(d))/(2*a))<<endl;}
    else
        cout<<"Impossivel calcular"<<endl;
}
