#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{

char f,g,h,u,j;

int i,a,b,c,num,year,factorial,fac,d=2,count=0;



cout<<"**************Please Enter The Password To Move Forward****************\n\n";

cout<<"Enter password\n\n";

f=getch();
cout<<"*";

g=getch();
cout<<"*";

h=getch();
cout<<"*";

u=getch();
cout<<"*";

j=getch();
cout<<"*";


if((f=='s')&&(g=='a')&&(h=='m')&&(u='i')&&(j=='a'))

{
cout<<"\n\n**************Success***********";

cout<<"\n\nYour Password Is Correct\nYou May Procced"<<endl;

while(1)
{



cout<<"\nWhat do you want to do?\nPress 1 to add\nPress 2 to divide\nPress 3 to multiplication\nPress 4 to difference\nPress 5 to squre\nPress 6 to even and odd\nPress 7 to lep year or not\nPress 8 to smallest number\nPress 9 to prime or not.\n"<<endl;
cin>>i;


switch(i)
{
case 1:
     cout<<"\tEnter the 1st number:=";
     cin>>a;
     cout<<"\tEnter the 2nd number:=";
     cin>>b;
     c=a+b;
     cout<<"\tThe add is="<<c<<endl;;
     break;
case 2:
       cout<<"\tEnter the 1st number:=";
       cin>>a;
       cout<<"\tEnter the 2nd number:=";
       cin>>b;
       c=a/b;
       cout<<"\tThe division is="<<c<<endl;
       break;
case 3:
      cout<<"\tEnter the 1st number:=";
      cin>>a;
      cout<<"\tEnter the 2nd number:=";
      cin>>b;
      c=a*b;
      cout<<"\tThe multiplication is="<<c<<endl;;
      break;
case 4:
      cout<<"\tEnter the 1st number:=";
      cin>>a;
      cout<<"\tEnter the 2nd number:=";
      cin>>b;
      c=a-b;
      cout<<"\tThe difference is="<<c<<endl;
      break;
case 5:
      cout<<"\tEnter the number:=";
      cin>>num;
      c=num*num;
      cout<<"\tThe squre of the number is="<<c<<endl;
      break;
case 6:
      cout<<"\tEnter the number:=";
      cin>>num;
      if(num%2==0)
      cout<<"\tThis is an even number";
      else
      cout<<"\tIts an odd number";
      break;
case 7:
      cout<<"\tEnter a year:=";
      cin>>year;
      if((year%4)==0&&(year%100)!=0||(year%400)==0)
      cout<<"\tIts a lep year";
      else
      cout<<"\tIts not a lep year";
      break;
case 8:
      cout<<"\tInput the 1st number :=";
      cin>>a;
      cout<<"\tInput the 2nd number:=";
      cin>>b;
      cout<<"\tInput the 3rd number:=";
      cin>>c;
      if(a>b&&c>b)
      cout<<"\tThis smallest number is "<<b<<endl;
     if (a>c&&b>c)
     cout<<"\tThis smallest number is "<<c<<endl;
if (a<b&&a<c)
cout<<"\tThis smallest number is "<<a<<endl;;
break;
case 9:

     cout<<"\tEnter a number:=";
     cin>>num;
     for(i=2;i<=num/2;i++)
      {
        if(num%i==0)
        {
         count++;
            break;
        }
      }
     if(count==0 && num!= 1)
        cout<<num<<" is a prime number"<<endl;
     else
      cout<<num<<" is not a prime number"<<endl;
     break;

}}
}

else

cout<<"******sorry*******-_-.........\n\nYou Entered The Wrong Password...Please Try Again"<<endl;

}


