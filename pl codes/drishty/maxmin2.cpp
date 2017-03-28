#include<iostream>
using namespace std;
int main(){
    int n,a[100],i,ma=-99999999,mi=99999999;
    cout<<"How many input you want? "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" numbers."<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(i=0;i<n;i++)
    {
        ma=max(ma,a[i]);
        mi=min(mi,a[i]);
    }
    cout<<mi<<" "<<ma<<endl;
}

