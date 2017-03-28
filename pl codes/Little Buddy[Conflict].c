#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

int add(char Q[])
{
	int a[100];
	int sum=0;
	int i=0;
	int count;

	for(count=0; Q[count]!='\0'; count++)
	{
		if(Q[count]>=48 && Q[count]<=57)
		{
			sum=sum*10+Q[count]-48;
			a[i]=sum;
		}

		else
		{
			sum=0;
			if(count!=0)
			{
				if(Q[count-1]>=48 && Q[count-1]<=57)
				{
					i++;
				}
			}
		}
	}

	if(Q[strlen(Q)-1]>=48 && Q[strlen(Q)-1]<=57)
	{
		i++;
	}

	sum=0;

	for(count=0; count<i; count++)
	{
		sum=sum+a[count];
	}

	return sum;
}

int sub(char Q[])
{
	int a[100];
	int sum=0;
	int i=0;
	int count;

	for(count=0; Q[count]!='\0'; count++)
	{
		if(Q[count]>=48 && Q[count]<=57)
		{
			sum=sum*10+Q[count]-48;
			a[i]=sum;
		}

		else
		{
			sum=0;
			if(count!=0)
			{
				if(Q[count-1]>=48 && Q[count-1]<=57)
				{
					i++;
				}
			}
		}
	}

	if(Q[strlen(Q)-1]>=48 && Q[strlen(Q)-1]<=57)
	{
		i++;
	}

	sum=0;

	for(count=0; count<i; count++)
	{
		if(count==2)
		{
			break;
		}

		sum=sum+a[count];
	}

	if(strstr(Q, "from")!=NULL)
	{
		return (a[1]*2-sum);
	}

	else
	{
		return (sum-a[1]*2);
	}
}

int main()

{
    int i,infolen,ch;

    char info[]="My name is LITTLE BUDDY who  will give u information on ur request\nIm created and developed by TANVIR and MOBASSER\nYou can ask me anything i will try to reply u\nexample:what is your name??........................";
    infolen=strlen(info);
    for(i=0;i<=infolen;i++){
    printf("%c",info[i]);
    Sleep(5);
    }
    system("cls");



    printf("ready??\n");

    char q[100];
    char n[100];
    while(1){


    gets(n);
    system("cls");
    gets(q);
    printf("Searching. ");
    for(i=0;i<15;i++)
    {
        printf(". ");
        Sleep(50);
    }
    printf("\n");
    strlwr(q);
{

{            printf("\n\n");
        if(strstr(q, "+")!=NULL || strstr(q,"add")!=NULL || strstr(q,"sum")!=NULL)
             printf("%d",add(q));                   // ADD
		else if(strstr(q,"minus")!=NULL || strstr(q,"subtract")!=NULL ||  strstr(q,"sub")!=NULL ||  strstr(q, "deduct")!=NULL || strstr(q, "-")!=NULL)
             printf("%d", sub(q));                  //SUBTRACT

        else if(strstr(q,"ur name")!=NULL || strstr(q,"your name")!=NULL)
             printf("My name is Little Buddy :) ");       // NAME
        else if(strstr(q,"birthday")!='\0')
             printf("my birthday is 14.4.2014");         // BIRTHDAY
        else if(strstr(q,"developer")!='\0'||strstr(q,"devloper")!='\0'||strstr(q,"creator")!='\0')
             printf("TANVIR ISLAM & MOBASSER AHMED");    // DEVLOPER

        else if(strstr(q,"timer")!='\0'||strstr(q,"stopwatch")!='\0')

{

     int i=-1,j,h=0;
      for(j=0;j<=59;j++){

        if(j==0){
        i=i+1;
        if(i==60){
        h=h+1;
        i=0;
        if(h==24)
        h=-1;
        }
        }printf("hour\tmint\t\tsec\n");
        printf("%d\t%d\t\t%d\n",h,i,j);
         Sleep(1000);
         system("cls");



        }

        }


        else if(strstr(q,"what time")!='\0'||strstr(q,"time")!='\0'||strstr(q,"current time")!='\0'|| strstr(q,"what time is it")!='\0')
        {time_t currentTime = time(0);                         // TIME
             printf("The Current Time is %s", ctime(&currentTime));}
             else if(strstr(q,"quite")!=NULL || strstr(q,"exit")!=NULL || strstr(q,"stop")!=NULL ||strstr(q,"finish")!=NULL)
        {
            printf("Bye Bye !!!!");Sleep(1000);break;          // QUITE
        }

              else if(strstr(q,"shutdown")!='\0'||strstr(q,"turn off")!='\0'||strstr(q,"off")!='\0')
        {

            printf("Do you want to shutdown your computer now (y/n)\n");    // Shutdown

            system("C:\\WINDOWS\\System32\\shutdown /s");
        }

        else if(strstr(q,"notepad")!='\0'||strstr(q,"note pad")!='\0'){
        system("C:\\Windows\\System32\\notepad");
        }
        else if(strstr(q,"control")!='\0')
        system("C:\\Windows\\System32\\control");
        else if(strstr(q,"calculator")!='\0' || strstr(q,"calcu")!=NULL)
            system("C:\\Windows\\System32\\calc");
        else if(strstr(q,"help")!=NULL)
            printf("1.I can open calculator\n2.I can open CONTROL PANEL.\n3.I can open notepad\n4.I can open TIMER.\n5.I can Shut Down your pc.\n6.I can answer some question.\n7.i can tell you time.");
        else if(strstr(q,"about you"))
          printf("My name is LITTLE BUDDY who  will give u information on ur request\nIm created and developed by TANVIR and MOBASSER\nYou can ask me anything i will try to reply u\nexample:what is your name??................\n\n\n1.I can open calculator\n2.I can open CONTROL PANEL.\n3.I can open notepad\n4.I can open TIMER.\n5.I can Shut Down your pc.\n6.I can answer some question.");


        else
            printf("Sorry can't understand , will you repeat please.");





}
}
}}

