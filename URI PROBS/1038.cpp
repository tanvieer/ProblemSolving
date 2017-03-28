#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int X,Y;
    cin>>X>>Y;
    if (X==1)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*4.00<<endl;
    else if (X==2)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*4.50<<endl;
    else if (X==3)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*5.00<<endl;
    else if (X==4)
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*2.00<<endl;
    else
        cout<<"Total: R$ "<<fixed<<setprecision(2)<<Y*1.50<<endl;
}
