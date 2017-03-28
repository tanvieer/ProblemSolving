#include<stdio.h>
#include<string.h>

struct student
{
    char name[50];
    char id[12];
    char dept[10];
    int credit[5];
    float cgpa[10];
};
void main(void)
{   int i;
    char a,n[10];
    student s[40];
    for(i=0;i<5;i++)
    {
        gets(s[i].name);
    }
    printf("if you want to search by name , press n or if you want to search by id , press id");
    scanf("%c",&a);
    if(a=='n')
    {
        printf("Enter name:\n");
        scanf("%s",&n);
        for(i=0;i<5;i++)
        {
            if(strstr(s[i].name,n)!=NULL))
            printf("%s",s[i].name);
        }
    }
}
