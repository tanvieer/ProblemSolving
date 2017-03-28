#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main()
{
    int n,i;
    double a,p,area,pi=3.14159265358979323846;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>a;
        p=2*a;
        area=(p*p)-(pi*a*a);
        cout.precision(2);
        cout<<"Case "<<i<<": "<<fixed<<area<<endl;
    }
    return 0;
}
