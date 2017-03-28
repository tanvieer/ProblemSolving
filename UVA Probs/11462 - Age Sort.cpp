#include<iostream>
#include<algorithm>
using namespace std;
long int a[2000000],i,n;

int main()
{
    while (cin>>n)
    {
        if (n==0)
        break;

        for (i=0;i<n;i++)
        cin>>a[i];

        sort(a,a+i);

        for (i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
