#include<iostream>
using namespace std;

int main()
{
int ar[1500]; //introducing an array of length 1500
ar[0]=1; //assigning a value to the first address of array
int i, j, k; //three variables for three possible values for the next address in array

int t=0, th=0, f=0; //three variables to keep track of the next multiples of 2,3 and 5

for(int n=1; n<1500; n++)
{
    i=2*ar[t]; //2*(array element)
    j=3*ar[th]; //3*(array element)
    k=5*ar[f]; //5*(array element)

    if(i<j && i<k) //if the multiple of 2 has the least value
    {
    ar[n]=i; //next element will be that least value
    t++; //2 will then be multiplied with the next element in array
    }
    else if(j<i && j<k) //similar
    {
    ar[n]=j;
    th++;
    }
    else if(k<i && j>k) //similar
    {
    ar[n]=k;
    f++;
    }

    else if(i==j) {th++; n--;} //3 to be multiplied with the next element. 2 same values of array elements. 1 has to be overwritten the next time
    else if(k==j) {f++; n--;}
    else if(i==k) {f++; n--;}
}

cout<<"The 1500'th ugly number is "<<ar[1499]<<"."<<endl; //1500th element

return 0;
}
