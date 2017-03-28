#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    cout.precision(2);
    double s = 1.0;
    for (int i=2;i<=100;i++){
        s += 1.0 /(double)i;
    }
    cout<<fixed<<s<<endl;
}
