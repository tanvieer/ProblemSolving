#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	int a,i,l;
	char b[101];

	cin>>a;
	for(i=0;i<a;i++)
	{
		cin>>b;
		l=strlen(b);
		strlwr(b);
		if(len>10)
		{
			cout<<b[0]<<l-2<<b[l-1]<<endl;
		}

		else
			cout<<b<<endl;


}}
