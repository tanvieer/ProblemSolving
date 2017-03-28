
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main () {

    int t,i,a,b,s,p;

    cin>>t;
    for(i=1;i<=t;i++){
        cin>>a>>b;
        p=abs((b-a));
        s=p+a;
        cout<<"Case "<<i<<": "<<4*s+19<<endl;
    }
return 0;
}
