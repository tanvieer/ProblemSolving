#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    float a, b, c;
    cin >>a>>b>>c;
    if (a<b + c&&b < a+c && c< a+b){
        cout<<"Perimetro = "<<fixed<<setprecision(1)<<a+b+c<<endl;
    } else {
        cout<<"Area = "<<c*(a+b)/2<<endl;
    }
}
