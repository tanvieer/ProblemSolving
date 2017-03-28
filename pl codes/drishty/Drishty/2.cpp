#include<stdio.h>
int arr[100];     // This is Global variable for use in both function
void max(int n)
{
    int c, d, swap;
     for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (arr[d] > arr[d+1])
      {
        swap       = arr[d];
        arr[d]   = arr[d+1];
        arr[d+1] = swap;
      }
    }
  }
}
int main()
{
	int n,i;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	printf("\n");

	for(i=0;i<n;i++)
	{
	    printf("Enter array[%d] value = ",i+1);
		scanf("%d",&arr[i]);
	}
    max(n);
    printf("After sorting:\n\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);

}
