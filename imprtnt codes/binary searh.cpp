#include<iostream>
using namespace std;
int main()
{
    int a[13]={11,22,33,44,55,66,77,88,99,110,155,166,177};
    int first ,last,bs,mid;
    while(cin>>bs)
    {
        first=0;
        last=(sizeof(a)/sizeof(a[0]))-1;
        mid=last/2;
        while(first<=last)
        {
            if(a[mid]>bs)
            {
                last=mid-1;
                mid=(first+last)/2;
            }
            else if(a[mid]<bs)
            {
                first=mid+1;
                mid=(first+last)/2;
            }
            if(a[mid]==bs)
            {
                cout<<"Position is "<<mid+1<<" \nNumber is : "<<a[mid]<<endl;
                return 0;
            }
        }
         cout<<"Notfound"<<endl;
    }
}
