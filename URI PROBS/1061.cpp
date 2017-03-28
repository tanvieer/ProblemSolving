#include<iostream>
#include<string>
using namespace std;
int main(){
    string n;
    int d,dd,h,hh,m,mm,s,ss;
    cin>>n>>d;
    cin>>h>>n>>m>>n>>s;
    cin>>n>>dd;
    cin>>hh>>n>>mm>>n>>ss;

    s=ss-s;
    m=mm-m;
    if(h<hh){
        d=dd-d;
    } else {
        d=dd-d-1;
        if (d<0)
            d=0;
    }
    h=hh-h;
    if(h<0)
        h=24+h;

    cout<<d<<" dia(s)"<<endl;
    cout<<h<<" hora(s)"<<endl;
    cout<<m<<" minuto(s)"<<endl;
    cout<<s<<" segundo(s)"<<endl;
}
