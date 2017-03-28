#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int k=1,z=0,f;

        while(k!=0)
        {
            cin>>k;

            cin>>f;


                int numArr[783];
                int total,rem=0,ct;
                register int i;

                for(i=0;i<783;i++)
                    numArr[i]=0;

                numArr[783]=1;

                for(ct=2;ct<=k;ct++)
                {
                    while(i>0)
                    {
                        total=numArr[i]*ct+rem;
                        rem=0;
                        if(total>9)
                        {
                            numArr[i]=total%10;
                            rem=total/10;
                        }
                        else
                        {
                            numArr[i]=total;
                        }
                        i--;
                    }
                    rem=0;
                    total=0;
                    i=783;
                }

                for(i=0;i<=783;i++)
                {
                    if(numArr[i]!=0 || ct==1)
                    {
                     if(numArr[i]==f)
                          z++;
                        ct=1;
                    }
                }

                cout<<z<<endl;
                z=0;
        }
    }

    return 0;
}
