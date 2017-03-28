#include<iostream>
using namespace std;
int main(){
    int h1,h2,m1,m2,m;
     while (1) {
        cin>>h1>>m1>>h2>>m2;
        if (h1==0 && h2== 0 && m1==0 && m2==0)
            break;

        if(h1<=h2)
            m=(h2-h1)*60;
        else
            m=(24-(h1-h2))*60;

        if (m1<=m2)
            m += m2-m1;
        else
            m += m2-m1;

        if (h1==h2 &&  m1>m2)
            m =23*60+(60-m1+m2);

        cout<<m<<endl;
    }
}

