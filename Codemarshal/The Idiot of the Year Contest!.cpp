/*
A. The Idiot of the Year Contest!

Score: 0

CPU: 1s
Memory: 1024MB


There is just one basic rule in the Idiot of the Year Contest (IYC)! The contestant picks a random digit between 0 and 9, computes the factorial of the day of the year he/she is born, and counts the how many times the digit picked appears in the factorial. The contestant with highest count is the Idiot of the Year! For example, if you are born on 5th of Mordad which is the 129th day of the year, and you pick the digit 6, your score will be the number of times the digit 6 appears in 129! (that is 1x2x3x...x129).

The chief judge of IYC wants you to write a program to get an integer which is the day of the year a contestant is born on and a digit and report the number of times the digit appears in the factorial of the first number.


Input
The first line of the input contains a single integer T which is the number of test cases, followed by T lines each containing the data for a test case having two numbers. The first number is the day of the year a contestant is born and the second one is the digit he/she has picked.


Output
The output contains T lines, each having one integer which is the number of times the digit appears in the factorial of the first number.


Sample
Input	Output
2         1
5 2       2
7 0



https://algo.codemarshal.com/contests/p-2014-11-29/problems/A









*/






#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a[1000];

    int t,i,j,temp,m,x;

    cin>>t;

    while(t--)
    {
        int n,z;
        cin>>n>>z;

        a[0]=1;

        m=1;

        temp = 0;

        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {
                x = a[j]*i+temp;

                a[j]=x%10;

                temp = x/10;
            }

            while(temp>0)
            {
                a[m]=temp%10;

                temp = temp/10;

                m++;
            }
        }

        int c=0;

        for(i=m-1; i>=0; i--)
        {
            if(a[i]==z)
                c++;
        }

        printf("%d\n",c);
    }



    return 0;
 }
