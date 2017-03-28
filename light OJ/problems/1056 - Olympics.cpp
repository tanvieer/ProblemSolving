#include<iostream>
#include<math.h>
#include<stdio.h>
#include <iomanip>
using namespace std;
#define pi 3.14159265359
double theta(double r,double h)
{
    double theta1;
    theta1 = acos ( (r*r+r*r-(h*h))/(2*r*r) ) * 180.0 / pi;
    return theta1;
}
double arcc(double w,double k)
{
    double h = w*k;
    double r = sqrt(w*w + h*h);
    r=r/2;
    return ((theta(r,h)/360)*2*pi*r);
}
int main()
{
    int t,a,b;
    double beg,en,mid,x,w,h,k;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        scanf("%d : %d",&a,&b);
        k=(double)b/ (double)a;
        beg=0.0;
        en=400.0;
        while(beg<en)
        {
            mid=(beg+en)/2;

            x=arcc(mid,k);
            if((mid+mid+x+x)<400)
                beg=mid;
            else if ((mid+mid+x+x)>400)
                en=mid;
			if((mid+mid+x+x)>399.999999 && (mid+mid+x+x)<400.000001)
				goto cas;
        }
        cas:
        cout<< fixed << setprecision(6)<<"Case "<<i<<": "<<mid<<" "<<mid*((double)b/(double)a)<<endl;
    }
}
