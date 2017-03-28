#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);cin.tie(0);
    int t,n,*a,c;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>n;
        a=new int[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
			{
				if(a[i]>a[j])
                    c++;
			}

        }
        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
        delete [] a;
    }
}
