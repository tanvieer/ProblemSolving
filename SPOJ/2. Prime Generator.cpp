#include<bits/stdc++.h>
using namespace std;
bool Prime(unsigned int n) {
    if(n==2)
       return true;
    else if(n < 2)
        return false;
  for (int i=2;i<=sqrt(n)+1;i++) {
    if (n%i==0) {
      return false;
    }
  }
  return true;
}
int main()
{
    unsigned int t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        for(m;m<=n;m++)
        {
            if(Prime(m))
                cout<<m<<endl;
            else
                continue;
        }
        cout<<"\n"<<endl;
    }

}


