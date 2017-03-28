#include<stdio.h>

int sum( int arr[], int n ) {
   if (n < 0) {
     return 0;
   } else{
     return arr[n] + sum(arr, n-1);
    }
}


int main()
{
   int array[1000];
   int i,n;

   printf("Enter the length of array: ");
	scanf("%d",&n);
	printf("\nEnter the elements of array: ");

	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
   printf("\nSum of array elements is: %d\n\n",sum(array,n-1));
   return 0;
}
