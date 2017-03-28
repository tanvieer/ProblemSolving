#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n , k ,i , a[100],s[100],l=0,c=-1,x=0,r[100],ri=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s[i]=a[i];
    }
    sort(a,a+n);
    i=0;

    while(l<k)
    {
        c++;
        l+=a[c];

    }
    if(c==0)
        return 0;
    cout<<c<<endl;
    for(i=0;;i++)
    {
        if(a[c-1]==s[i])
        {
            if(r[ri-1]!=i+1)
            r[ri]=i+1;
            ri++;
            i=0;
            c--;
            if(c<=0) return 0;
        }
    }

}
