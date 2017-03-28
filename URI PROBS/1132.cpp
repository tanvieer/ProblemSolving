#include<iostream>
using namespace std;
int main(){
    int d,t,i,s=0;
    cin>>d;
    cin>>t;

    if (d<t){
        for (i=d;i<=t;i++){
            if (i%13!=0)
                s+=i;
        }
    } else {
        for (i=t;i<=d;i++){
            if (i%13!=0)
                s+=i;
        }
    }
    cout<<s<<endl;
}
