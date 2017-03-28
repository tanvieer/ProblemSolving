#include <iostream>

using namespace std;

int main()
{
    int n,i,j,p;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>p;
        int a[p];
        for(j=0;j<p;j++){
            cin>>a[j];
        }
        int lowest;
        for(j=0;j<p;j++){

            if(a[j]>0)
                lowest=a[j];
                }
        for(j=0;j<p;j++){
           if(a[j]<lowest){
            if(a[j]>0)
                lowest=a[j];
           }
        }
        cout<<"Case "<<i<<": "<<lowest<<"\n";
    }
    return 0;
    }
