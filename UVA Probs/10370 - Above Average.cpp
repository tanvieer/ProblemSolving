#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c;
    double a[10000];
    cout.precision(3);
    cin>>t;
    while(t--)
    {
        double avg=0;
        int count=0;
        cin>>c;
        for(int i=0;i<c;i++)
        {
            cin>>a[i];
            avg+=a[i];
        }
        avg/=c;
        for(int i=0;i<c;i++)
        {
            if(a[i]>avg)
                count++;
        }
        cout<<fixed<<((100*count)/(double)c)<<"%"<<endl;

    }
}
