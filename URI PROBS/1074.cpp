#include<iostream>
using namespace std;
int main(){
    int q,n;
    cin>>q;
    while(q--){
        cin>>n;
        if (n==0){
            cout<<"NULL"<<endl;
            continue;
        }

        if (n%2==0)
            cout<<"EVEN ";
        else
            cout<<"ODD ";

        if (n<0)
            cout<<"NEGATIVE"<<endl;
        else
            cout<<"POSITIVE"<<endl;
    }
}
