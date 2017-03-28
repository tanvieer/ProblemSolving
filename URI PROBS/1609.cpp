#include <iostream>
using namespace std;

int main()
{
    int n,i,p,j;
    cin>>n;
    while(n--){
        cin>>p;
        long int a[p];
        for(i=0;i<p;i++){
            cin>>a[i];
        }
        int t=0;
        for(i=0;i<=p;i++){
           for(j=i+1;j<=p;j++){

            if(a[i]==a[j])
                {t++;
                break;}
           }
        }
        cout<<p-t<<endl;
    }
}
