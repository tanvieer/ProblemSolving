#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout.precision(2);
    double s=1.0,x=2.0;
    int i;
    for (i=3;i<=39;i+=2){
        s +=(double)i/x;
        x *=2;
    }
    cout<<fixed<<s<<endl;
}


