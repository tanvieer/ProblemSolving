#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    float a,b,c;

    cin>>n;
    while (n--){
        cin>>a>>b>>c;
        cout<<fixed<<setprecision(1)<<((a*2.0+b*3.0+c*5.0)/10.0)<<endl;
    }
}
