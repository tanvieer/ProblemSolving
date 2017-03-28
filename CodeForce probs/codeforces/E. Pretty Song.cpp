#include<bits/stdc++.h>
using namespace std;
char s[500013];
int n, sum[500013];
long double sum2[500013];
char vow[256];
int main()
{
    gets(s+1);
    n=strlen(s+1);
    cout<<n<<endl;
    vow['A']=vow['U']=vow['E']=vow['I']=vow['O']=vow['Y']=1;
    for(int i=1;i<=n;++i)
    {
        sum[i]=vow[s[i]]+sum[i-1];
        cout<<s[i]<<endl;

        //cout<<"sum["<<i-1<<"] "<<" = "<<sum[i-1]<<endl;
        sum2[i]=sum[i]+sum2[i-1];
       // cout<<"sum["<<i<<"]"<<" = "<<sum[i]<<endl;
    }
    long double ans2=sum[n];
    for(int i=2;i<=n;++i)
    {
        ans2+=1.0*sum[i]/i;
       // cout<<"ans2 = "<<ans2<<"+ans2+1.0*sum["<<i<<"]/"<<i<<endl;
    }

    for(int i=1;i<=n-2;++i)
    {
        ans2-=sum2[i]/(n-i);
        cout<<"ans2 = "<<ans2<<"ans2+1.0*sum["<<i<<"]/"<<i<<endl;
    }
    for(int i=3;i<=n;++i)
    {
        ans2+=(sum2[n]-sum2[i-1])/(i-1);
    }
    cout.precision(15);
    cout<<fixed<<ans2<<endl;
}
