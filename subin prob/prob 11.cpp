#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int cy,by,cd,bd,cm,bm,ex=0,m,d;
    cin>>cy>>cm>>cd;
    cin>>by>>bm>>bd;
    for(int i=by;i<cy;i++)
    {
        if(i%400==0 || i%4==0)
            ex++;
    }
    d=(cy-by)*365;
    d=d+ex;

        for(int i=bd;bm<=cm;i++)
    {
        d++;
        if(i==30)
        {
         bm++;
         i=0;
         if(bm==11 && cm%4==0 || cm%100==0)
            {
                for(int i=0;i<=31;i++)
                    {
                    d++;
                    if(i==31)
                    {
                        i=0;
                        bm++;
                        break;
                    }
                    }
            }

        }}
cout<<d;

}
