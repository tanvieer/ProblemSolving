#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>
#define blue {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=1);}
#define green {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=2);}
#define sky {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=3);}
#define red {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=4);}
#define pink {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=5);}
#define yellow {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=6);}
#define white {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=7);}
#define ash {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=8);}
#define blue2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=9);}
#define green2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=10);}
#define sky2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=11);}
#define red2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=12);}
#define pink2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=13);}
#define yellow2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=14);}
#define white2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=15);}
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

{   HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int i,infolen,ch;

    char info[]="My name is LITTLE BUDDY who  will give u information on ur question\nIm created and developed by TANVIR and MOBASSER\nYou can ask me anything i will try to reply u\nexample:what is your name??........................";
    infolen=strlen(info);
    for(i=0;i<=infolen;i++){
  green;printf("%c",info[i]);
    Sleep(50);
    }
    system("cls");



    printf("ready??\n");

    char q[100];
    char n[100];
    while(1){


    gets(n);
    system("cls");
    gets(q);
    printf(" ");
    for(i=0;i<15;i++)
    {
        printf("..");
        Sleep(10);
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
        else if(strstr(q,"birthday")!='\0'|| strstr(q,"born")!='\0')
             printf("my birthday is 14.4.2014");         // BIRTHDAY
        else if(strstr(q,"developer")!='\0'||strstr(q,"developer")!='\0'||strstr(q,"creator")!='\0'||strstr(q,"parents")!='\0')
             printf("MOBASSER AHMED & TANVIR ISLAM");    // DEVLOPER
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
        else if(strstr(q,"quite")!=NULL || strstr(q,"good bye")!=NULL || strstr(q,"stop")!=NULL ||strstr(q,"good night")!=NULL)
        {
            printf("Bye Bye !!!!");Sleep(1000);break;          // QUITE
        }

            else if(strstr(q,"shutdown")!='\0'||strstr(q,"turn off")!='\0'||strstr(q,"off")!='\0')
        { char ch;

            printf("Do you want to shutdown your computer now (y/n)\n");    // Shutdown
            scanf("%c",&ch);
        if (ch == 'y' || ch == 'Y')
            system("C:\\WINDOWS\\System32\\shutdown /s");
        }

        else if(strstr(q,"notepad")!='\0'){
            system("C:\\Windows\\System32\\notepad");
            }
        else if(strstr(q,"control")!='\0')
            system("C:\\Windows\\System32\\control");
        else if(strstr(q,"calculator")!='\0' || strstr(q,"calcu")!=NULL)
            system("C:\\Windows\\System32\\calc");
        else if(strstr(q,"paint")!='\0')
            system("C:\\Windows\\System32\\mspaint");
        else if(strstr(q,"help")!=NULL)
            printf("1.I can open calculator\n2.I can open CONTROL PANEL.\n3.I can open notepad\n4.I can open TIMER.\n5.I can Shut Down your pc.\n6.I can answer some question.");
        else if(strstr(q,"about you")!='\0'|| strstr(q,"who are you")!='\0')
          printf("My name is LITTLE BUDDY who  will give u information on ur request\nIm created and developed by TANVIR and MOBASSER\nYou can ask me anything i will try to reply u\nexample:what is your name??................\n\n\n1.I can open calculator\n2.I can open CONTROL PANEL.\n3.I can open notepad\n4.I can open TIMER.\n5.I can Shut Down your pc.\n6.I can answer some question.");
        else if(strstr(q,"how")!='\0')
            printf("im fine,how are u my friend ??");
        else if(strstr(q,"sick")!='\0')
            printf("ow dear you should go to doctor or take rest!!!");
        else if(strstr(q,"b4")!='\0')
            printf("what you want to know about b4 section??");
        else if(strstr(q,"pl teacher")!='\0')
            printf("sharfuddin mahmood. He has a nice personality");
        else if(strstr(q,"student list")!='\0')
            printf("onk ase kuntar ktha komu kew amare mairala :/");
        else if(strstr(q,"ivan")!='\0')
            printf("oi sniper tar ktha jigaen na.\nonno kuno question? ");
        else if(strstr(q,"rafa")!='\0')
            printf("system error");
        else if(strstr(q,"monju")!='\0')
            printf("apni ki mojnur kotha boltesen ??? :D");
        else if(strstr(q,"game")!='\0')
            printf("at this moment in my database there is no game but my developers are working on it");
        else if(strstr(q,"fuck")!='\0')
            printf("i need talk to your mom.how dare u to talk like this ?");
        else if(strstr(q,"stupid")!='\0')
            printf("im learning so help me to learn better dont blame me im a little kid");
        else if(strstr(q,"xishan")!='\0')
            printf("tallest bolod in ur class");
        else if(strstr(q,"chaity")!='\0')
            printf("im confused did u mean fariha??");
        else if(strstr(q,"mobasser")!='\0')
            printf("he is my master but He is not aviliable here right now,so step aside ;-) ");
        else if(strstr(q,"ditails")!='\0')
            printf("he is studing on cse at aiub");
        else if(strstr(q,"joy")!='\0')
            printf("did u mean victory??");
        else if(strstr(q,"tasneem")!='\0')
            printf("gundi number one.i heard she beats rafa :D");
        else if(strstr(q,"tabassum")!='\0')
            printf("did u mean the american boin??");
        else if(strstr(q,"shamudra")!='\0')
            printf("are you my nigga ? :D");
        else if(strstr(q,"talk")!='\0')
            printf("yes i wanna talk with you but your behave is not good so go away");
        else if(strstr(q,"do now")!='\0')
            printf("i wanna talk with you");
        else if(strstr(q,"gender")!='\0')
            printf("im male");
        else if(strstr(q,"like me")!='\0')
            printf("yes i like you");
        else if(strstr(q,"smoke")!='\0')
            printf("i dont smoke and i dont like it");
        else if(strstr(q,"love you")!='\0')
            printf("ok thanks");
        else if(strstr(q,"hi")!='\0')
            printf("hellow :) ");
        else if(strstr(q,"my girlfriend")!='\0'||(strstr(q,"single")!='\0'))
            printf("im single and im loving it");
        else if(strstr(q,"sharfuddin")!='\0')
            printf("he is cs faculty of aiub ");
        else if (strstr(q,"what are you doing")!='\0')
            printf("im heping you ");
        else if(strstr(q,"data sheet")!='\0')
        {

           strctur();

        }
        else if(strstr(q,"print")!='\0')
        {
            char zxc[100],xcv[100]="automatic printfing is loading................";
            printf("what you want to print?\n");
            gets(zxc);
            i=0;
            while(xcv[i]!='\0'){
                printf("%c",xcv[i]);
                Sleep(100);
            i++;}
            printf("\n\n\n");

            printf("%s",zxc);

        }

















        else{
            if(i>=2)
                i=0;


         if(i==0)
             i++;
            printf("im busy talk to you later bye :P .");


        }







}
}
}}
void strctur()
{


struct record{
    char name[12];
    int salary[12];
    char attendance[19];



};
//int main()

{   int n,i,j,xx;
    char user[20],pass[20];
    char doc[20]="moba";
    char dpass[20]="mobasser";
    char log[40]="login succesfull infomation loading....";
    char st[10];
    char nd[10];
    char rd[10],p;





  //  printf("welcome i can help u to make a data table\n");
    printf("tell me how much number you have so that i can make sheet for u??\n");


    scanf("%d",&n);
    struct record a[n];
    printf("give me  a pattern so i can understand how u wanna desing ur data sheet\n\nexpm1::name\troll\tmark\nexp2::empl\tslary\tattednt\n");

    gets(st);
    gets(st);

    gets(nd);
    gets(rd);




   for(i=0;i<n;i++)
  {


    printf("enter your  %s\n",st);
    printf("%d:",i+1);
    scanf("%s",&a[i].name);
    printf("enter %s\n",nd);
    scanf("%s",&a[i].salary);
    printf("enter %s \n",rd);
    scanf("%s",&a[i].attendance);
    printf("\n\n\n");
  }


  printf("thank you ur information has been fsaved\n");
  printf("if you want to see info then login\n\n");
  printf("enter your username::");
  //gets(user);
  scanf("%s",user);
  if(strstr(doc,user)!='\0')
     printf("enter password::");
    // scanf("%s",pass);

 for(i=0;i<=7;i++) {
  p = getch();
  pass[i] = p;
     p = '*' ;
  printf("%c", p);

 }
 printf("\n");


  if(strstr(pass,"moba")!='\0'){
    for(j=0;j<=38;j++){
    printf("%c",log[j]);
    Sleep(100);
    }
    printf("\n\n");

    for(xx=0;xx<n;xx++)
   printf("%s:%s\t%s:%s\t%s:%s\n",st,a[xx].name,nd,a[xx].salary,rd,a[xx].attendance);
  }

  else printf("login failed !! try again");
  getch();






}}


