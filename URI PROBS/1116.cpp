#include<iostream>
#include<iomanip>>
using namespace std;
int main(){
    float x, y;
    int n;
    cin>>n;
    while(n--){
        cin>>x>>y;
        if(y==0.0)
            cout<<"divisao impossivel"<<endl;
        else
            cout<<fixed<<setprecision(1)<<x/y<<endl;
    }
}
