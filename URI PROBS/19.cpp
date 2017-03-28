#include<iostream>
using namespace std;
int main(){
    int t, h = 0, m = 0, s = 0;
    cin>>t;
    if (t >= 60 * 60){
        h = t / (60 * 60);
        t %= (60 * 60);
    }
    if (t >= 60){
        m = t / 60;
        t %= 60;
    }
    s = t;
    cout<<h<<":"<<m<<":"<<s<<endl;
}
