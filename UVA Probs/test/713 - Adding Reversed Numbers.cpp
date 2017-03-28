#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int i,j,n,x[200],y[200],la,lb,m,r=0,c=0;
    memset (x,0,200);
    memset (y,0,200);
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        a = strrev(a);
        b = strrev(b);
        cout<<a<<endl;
        cout<<b<<endl;
        la=a.length();
        lb=b.length();
        for(i=0;i<la;i++)
            x[i]=a[i]-'0';
        for(i=0;i<lb;i++)
            y[i]=b[i]-'0';
        m=max(la,lb);
        for(i=0;i<m;i++)
        {
            r=x[i]+y[i]+r;
            if(r>9)
            {
                cout<<r/10;
                r=1;
            }
            else if(r<10 && r>0)
                {
                    cout<<r;
                    r=0;
                }
            else
                {
                    r=0;
                    continue;
                }

        }
        cout<<endl;
    }
}
