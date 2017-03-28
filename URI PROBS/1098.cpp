#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    double i,j;
    for(i=0.0;i<=2.0;i+=0.2){
        for(j=1.0;j<=3.0;j+=1.0){
            if(i==0.0||i==1.0||i>=1.9)
                cout<<fixed<<setprecision(0)<<"I="<<i<<" J="<<j+i<<endl;
            else
                cout<<fixed<<setprecision(1)<<"I="<<i<<" J="<<j+i<<endl;
        }
    }
}
