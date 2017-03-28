#include<stdio.h>
int arr[100];     // This is Global variable for use in both function
void maxmin(int n)
{
    int i,max,maxPosition,temp,k;
    	for(i=0;i<n;i++)
	{
		 maxPosition=0;
		 max=0;

		for(k=i;k<n;k++)
		{
			if(arr[k]>max)
			{
				maxPosition=k;
				max=arr[k];
			}
		}
        temp=arr[i];
		arr[i]=max;
		arr[maxPosition]=temp;
	}
}
int main()
{
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    maxmin(n);
    printf("Maximum %d \nMinimum %d\n",arr[0],arr[n-1]);

}
