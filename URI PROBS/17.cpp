#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float h, s;
    cin>>h;
    cin>>s;
    cout<<fixed<<setprecision(3)<<h * s / 12.0<<endl;
}
