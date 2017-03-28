#include<iostream>
#include<cstdio>
using namespace std;

int strlen(char a[])
{
    int i=0;
    while(a[i]!=NULL)
        i++;
    return i;
}

string strcpy(char *a,char *b)
{
    int i=0,l1,l2;
    l1=strlen(a);
    l2=strlen(b);
    l1=max(l1,l2);
    while(i!=l1)
    {
        a[i]=b[i];
        i++;
    }
    a[i]=NULL;
    return a;
}

string strcat(char *a,char *b)
{
    int i,j=0;
    i=strlen(a);
    while(b[j]!=NULL)
    {
        a[i+j]=b[j];
        j++;
    }
    a[i+j]=NULL;
    return a;
}
int strcmp(char a[],char b[])
{
    int r1=0,r2=0,i=0;
    while(a[i]!=NULL)
    {
        r1+=a[i];
        i++;
    }
    i=0;
    while(b[i]!=NULL)
    {
        r2+=b[i];
        i++;
    }
    if(r1==r2)
        return 0;
    else if(r1<r2)
        return -1;
    else if(r1>r2)
        return 1;
}

string xleft(char *msg, char *newmsg, int a)
{
    int i=0;
    while(i!=a)
    {
        newmsg[i]=msg[i];
        i++;
    }
    newmsg[i]=NULL;
    return newmsg;
}

string xright(char *msg, char *newmsg, int a)
{
    int j=a-1;
    int i=strlen(msg)-1;
    while(j>=0)
    {
        newmsg[j]=msg[i];
        j--;i--;
    }
    newmsg[a]=NULL;

    return newmsg;
}

string xsubstr(char *msg, char *newmsg, int a, int b)
{
    int i,j;
    for(i=a-1,j=0;i<b;i++,j++)
    {
        newmsg[j]=msg[i];
    }
    if(newmsg[0]>90)
        newmsg[0]-=32;
    newmsg[j]=NULL;
    return newmsg;
}

string xcat(char *msg, char *newmsg, int a, int b, int c, int d)
{
    char m1[10000];
    xsubstr(msg, newmsg, a, b);
    xsubstr(msg, m1, c, d);
    strcat(newmsg,m1);
    return newmsg;
}

string xcmp(char *msg, char *newmsg, int a, int b, int c, int d)
{
    char m1[10000];
    xsubstr(msg, newmsg, a, b);
    xsubstr(msg, m1, c, d);

    if(strcmp(newmsg,m1)==0)
        strcpy(newmsg,"EQUAL");
    else
        strcpy(newmsg,"NOT EQUAL");

    return newmsg;
}



int main()
{
	    char msg[ ] = "Vote Sunderban for New7Wonder";
	    char newmsg[35];

	    xleft(msg, newmsg, 14);
	    printf("%s\n",newmsg);

	    xright(msg, newmsg, 10);
	    printf("\n%s\n", newmsg);

	    xsubstr(msg, newmsg, 16, 18);
	    printf("\n%s\n", newmsg);

	    xcat(msg, newmsg, 6, 14, 19, 29);
	    printf("\n%s\n", newmsg);

	    xcmp(msg, newmsg, 9, 11, 27, 29);
	    printf("\n%s\n", newmsg);

	    xcmp(msg, newmsg, 6, 9, 20, 23);
	    printf("\n%s\n", newmsg);
}
