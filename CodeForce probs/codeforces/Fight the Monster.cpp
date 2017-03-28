#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hpy,hpm,atky,atkm,defy,defm,y,m,a,d,h;
    cin>>hpy>>atky>>defy>>hpm>>atkm>>defm>>h>>a>>d;
    h=min(h,a);
    h=min(h,d);
    y=atkm-defy;
    m=atky-defm;
    a=hpy-y;
    d=hpm-m;
   /* if(hpy-y>=0)
        cout<<"0"<<endl;
    else
        cout<<y*h<<endl;*/
        if(a>d)
           cout<<"0"<<endl;
        else
            cout<<(d-a+1)*h<<endl;
}
