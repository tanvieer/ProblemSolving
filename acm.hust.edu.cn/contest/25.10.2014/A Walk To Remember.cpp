#include <iostream>
using namespace std;
int main()
{
    long long int dec,rem,j,n;
    cin>>n;
    for(j=1;j<=n;j++){
    cin>>dec;
    long long int sum=0,i=1;
    do
    {
        rem=dec%2;
        sum=sum + (i*rem);
        dec=dec/2;
        i=i*10;
    }while(dec>0);
    if(sum%2==0)
        cout<<"Case "<<j<<": even"<<endl;
    else
    cout<<"Case "<<j<<": odd"<<endl;
    }
    return 0;
}
