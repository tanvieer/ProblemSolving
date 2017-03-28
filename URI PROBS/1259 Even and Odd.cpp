
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,*a,*b,a1,k=0,l=0;
	cin>>t;
	a=new int[t];
	b=new int[t];
	for(int i=0;i<t;i++)
	{
		cin>>a1;
		if(a1%2==0)
		{
			a[k]=a1;
			k++;
		}
		else
		{
			b[l]=a1;
			l++;
		}
	}
	sort(a,a+k);
	sort(b,b+l);
	for(int i=0;i<k;i++)
		cout<<a[i]<<endl;
	for(int i=l-1;i>=0;i--)
		cout<<b[i]<<endl;
	delete [] a;
	delete [] b;
}
