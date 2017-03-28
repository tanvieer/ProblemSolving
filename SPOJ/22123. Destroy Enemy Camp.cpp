#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  else if (n==2) return true;
  for (long long i = 2; i <= sqrt(n) + 1; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main()
{
    int t,j=0;
    long long int n;
    cin>>t;
 for(int i=1;i<=t;i++)
    {
        cin>>n;
        st:
            n++;
            j++;
        if(isPrime(n))
        {
            cout<<"Case "<<i<<": "<<n<<" "<<j<<endl;
            j=0;
        }
        else
            goto st;
    }
}
