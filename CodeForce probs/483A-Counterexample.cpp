#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b) {
  while (b != 0)  {
    long long int t = b;
      b=a%b;
      a=t;
  }
  return a;
}
int main()
{
    long long int x,y,t,e=0,i;
    while((cin>>x>>y) && x<=y)
    {
        {if(y-x>1)
        {
        t=x+1;
        for(i=t+1;i<=y;i++)
        {
           if(gcd(t,i)==1 && gcd(x,i)!=1)
           {
               e=i;
               break;
           }
        }
        if(e==0)
        { t++;
          x++;
           for(i=t+1;i<=y;i++)
        {
           if(gcd(t,i)==1 && gcd(x,i)!=1)
           {
               e=i;
               break;
           }
        }
        }
        }

        if(e==0)
            cout<<"-1"<<endl;
        else
           {cout<<x<<" "<<x+1<<" "<<e<<endl;
           e=0;}
    }

}
}
