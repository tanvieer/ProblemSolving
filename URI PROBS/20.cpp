#include<iostream>
using namespace std;
int main(){
    int t, a = 0, m = 0, d = 0;
    cin>>t;
    if (t >= 365){
        a = t / 365;
        t %= 365;
    }
    if (t >= 30){
        m = t / 30;
        t %= 30;
    }
    d = t;
    cout<<a<<" ano(s)"<<endl;
    cout<<m<<" mes(es)"<<endl;
    cout<<d<<" dia(s)"<<endl;
}
