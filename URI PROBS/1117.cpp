#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float n,s=0.0;
    int c=0;
    while(c<2){
        cin>>n;
        if(n>=0.0 && n<=10.0){
            c++;
            s += n;
        } else {
            cout<<"nota invalida"<<endl;
        }
    }
    cout<<"media = "<<fixed<<setprecision(2)<<s/2.0<<endl;
}
