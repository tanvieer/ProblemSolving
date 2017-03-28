#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,a[100],i;
    cout<<"How many input you want? "<<endl;
    cin>>n;
    cout<<"Enter "<<n<<" numbers."<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+i);
    cout<<a[0]<<" "<<a[i-1]<<endl;
}
