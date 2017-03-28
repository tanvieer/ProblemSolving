#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,i,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==1||b==1)
            printf("Case %d: %d\n",i,a*b);
        else if ((a==2 && b==4)|| b==2 && a==4)
            printf("Case %d: 4\n",i);
        else if(a==2||b==2)
                {
                    if(max(a,b)%4==2)
                        {printf("Case %d: %d\n",i,(a*b)/2+2);
                        }
                    else if(max(a,b)%4==3)
                        {printf("Case %d: %d\n",i,(a*b)/2+1);
                        }
                    else if(max(a,b)%4==0)
                        {printf("Case %d: %d\n",i,(a*b)/2);
                        }
                    else
                        {printf("Case %d: %d\n",i,(a*b)/2+1);
                        }
                }

        else if((a*b)%2!=0)
        {
            printf("Case %d: %d\n",i,((a*b)/2)+1);
        }
        else if((a*b)%2==0)
            printf("Case %d: %d\n",i,(a*b)/2);

    }
}
