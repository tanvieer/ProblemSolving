#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[10]={1,5,9,3,10,7,8,4,9,3};

    cout<<min(a[0],a[9])<<endl;
    cout<<max(a[0],a[9])<<endl;

    sort(a,a+10);
    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }


}
