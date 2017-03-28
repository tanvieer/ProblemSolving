#include<iostream>
using namespace std;
int main()
{
	int marks[5];
	int k,i,T,p;

    cin>>T;
	for(p=0;p<T;p++){

	for(i=0;i<5;i++)
	{
		cin>>marks[i];
	}

	for(i=0;i<5;i++)
	{
		int maxPosition=0;
		int max=0;

		for(k=i;k<5;k++)
		{
			if(marks[k]>max)
			{
				maxPosition=k;
				max=marks[k];
			}
		}

		int temp=marks[i];
		marks[i]=max;
		marks[maxPosition]=temp;
	}
      cout<<marks[4]<<" "<<marks[0]<<endl;
}}
