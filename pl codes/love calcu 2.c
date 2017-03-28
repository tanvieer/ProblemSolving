#include<stdio.h>
#include<conio.h>
#include<windows.h>
void main(void)
{int n,m;
char name[15],pname[15];
int avg=0,q,p,i,sumname=0,sumpname=0;
printf("Enter your name and then press enter and enter your partener name\n\n");
gets(name);
strlwr(name);
q=strlen(name);
gets(pname);
strlwr(pname);
p=strlen(pname);
for(i=0;i<q;i++)
sumname=(sumname+name[i]);
int avg1=sumname/q;
for(i=0;i<p;i++)
sumpname=(sumpname+pname[i]);
int avg2=sumpname/p;
avg=(avg1+avg2)%256;
if(avg>100)
    avg=avg/2;
if(avg>100)
    avg=avg/2;
if(avg>100)
    avg=avg/2;
if(avg<20)
    avg=avg+79;
if((avg%2)==0)
avg=avg-39;
if((avg%7)==0)
avg=avg-18;
if((avg%5)==0&&avg<56)
avg=avg+45;
system("cls");
if(strstr(name,"tanvir")!=NULL && strstr(pname,"tiha")!=NULL || strstr(pname,"tanvir")!=NULL && strstr(name,"tiha")!=NULL)
avg=100;
printf("\n\nYour love percentage is %d",avg);
if(avg<40)
printf("\n\nTry to Increase your love toooooooooo bad......");
if(avg>=40&&avg<=99)
printf("\n\nHmmmmm well your love is soo soo improve it.........");
if(avg>60&&avg<=90)
printf("\n\nCongtars....V.good...keep it up");
if(avg>90&&avg<=99)
printf("\n\nWOW GREAT..........Fantastic........your next goal is to acchive full 100.......ok");
if(avg==100)
printf("\n\nPERFECT Made for each other true love");
getch();
}
