#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a1,b1,c1,a2,b2,c2;
    double dstns;

    while (cin >>a1>>b1>>c1>>a2>>b2>>c2){
        dstns=sqrt(((b1-b2)*(b1-b2))+((c1-c2)*(c1-c2)));
        if(a1>=dstns+a2)
           cout<<"RICO"<<endl;
        else
            cout<<"MORTO"<<endl;
    }
}
