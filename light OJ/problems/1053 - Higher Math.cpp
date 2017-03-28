#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int a[3],t,i,j;
    cin>>t;
    for(j=1;j<=t;j++){

    for(i=0;i<3;i++){
        cin>>a[i];

    }
    sort(a,a+3);
    if((a[2]*a[2])==(a[0]* a[0])+(a[1]*a[1]))
       cout<<"Case "<<j<<": "<<"yes"<<endl;
    else
        cout<<"Case "<<j<<": "<<"no"<<endl;
}

}
