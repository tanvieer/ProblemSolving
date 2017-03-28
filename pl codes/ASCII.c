#include<stdio.h>
#include<conio.h>

int main()
{
    int count;

    for(count=0; count<=255; count++)
    {
        if(count%2!=0)
        {
            printf("%d : %c\n\n", count, count);
        }

        else
        {
            printf("%d : %c\t\t", count, count);
        }
    }

    getch();

    return 0;
}
