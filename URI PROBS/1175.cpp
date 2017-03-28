#include <iostream>
using namespace std;

int main(){
    int x,i,a[20];
    for (i=0;i<=19;i++)
        cin>>a[i];

    for (int i=0;i<=9;i++){
        x=a[i];
        a[i]=a[19-i];
        a[19-i]=x;
    }

    for (i=0;i<=19;i++)
        cout<<"N["<<i<<"] = "<<a[i]<<endl;

}
