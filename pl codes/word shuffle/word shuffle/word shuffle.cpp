#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
    char a[]="Hello World tanvir";
    char c[10];
    int i,j,k,count=0,count2=0;
    int b=strlen(a);
    for(i=0;i<b;i++)
       {
        if(a[i]==' ')
            {
               count++;
                    }
                else continue;}

            for(i=0;i<b;i++)
       {
        if(a[i]==' ')
            {
               count2++;
               if (count2==count)
       

				   
				   
				   {
                  for(j=i+1;j!='\0';j++)
                    printf("%c",a[j]);
                    printf(" ");
                    count--;
					i=0;

               }
               else continue;
                    }
                else continue;}

}
