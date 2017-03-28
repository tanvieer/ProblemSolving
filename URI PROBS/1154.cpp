#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float s=0,c=0.0;
    int n;
    while (1)
    {
        cin>>n;
    if(n<1)
        break;
    else{
        s=s+n;
        c=c+1.0;
    }}
    if(c>0)
    cout<<fixed<<setprecision(2)<<s/c<<endl;
    else
        return 0;
}
