#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
    int count, i;
    int fix[]={32-48, 32-48, 32-48, 32-48, 32-48, 32-48, 32-48, 32-48, 32-48};

    printf("\n\n");


    Sleep(1000);
    for(count=0; count<=132; count++)
        {
            if(count<4)
            {
                printf(" ");
                continue;
            }

            else if(count==4)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<8)
            {
                printf(" ");
                continue;
            }

            else if(count==8)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<12)
            {
                printf(" ");
                continue;
            }

            else if(count==12)
            {
                printf("\n ");
                continue;
            }

            else if(count<16)
            {
                if(count==14)
                {
                    printf("1");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==16)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<20)
            {
                if(count==18)
                {
                    printf("2");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==20)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<24)
            {
                if(count==22)
                {
                    printf("3");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==24)
            {
                printf("\n ");
                continue;
            }

            else if(count<28)
            {
                printf(" ");
                continue;
            }

            else if(count==28)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<32)
            {
                printf(" ");
                continue;
            }

            else if(count==32)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<36)
            {
                printf(" ");
                continue;
            }

            else if(count==36)
            {
                printf("\n ");
                continue;
            }

            else if(count>=37 && count<49)
            {
                for(i=count; i<=count+11; i++)
                {
                    if(i==count+3 || i==count+7)
                    {
                        printf("+");
                    }

                    else
                    {
                        printf("%c", 196);
                    }

                    if(i==count+11)
                    {
                        printf("\n ");
                    }
                }

                count=i-1;
                continue;
            }

            else if(count<52)
            {
                printf(" ");
                continue;
            }

            else if(count==52)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<56)
            {
                printf(" ");
                continue;
            }

            else if(count==56)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<60)
            {
                printf(" ");
                continue;
            }

            else if(count==60)
            {
                printf("\n ");
                continue;
            }

            else if(count<64)
            {
                if(count==62)
                {
                    printf("4");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==64)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<68)
            {
                if(count==66)
                {
                    printf("5");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==68)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<72)
            {
                if(count==70)
                {
                    printf("6");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==72)
            {
                printf("\n ");
                continue;
            }

            else if(count<76)
            {
                printf(" ");
                continue;
            }

            else if(count==76)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<80)
            {
                printf(" ");
                continue;
            }

            else if(count==80)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<84)
            {
                printf(" ");
                continue;
            }

            else if(count==84)
            {
                printf("\n ");
                continue;
            }

            else if(count>=85 && count<97)
            {
                for(i=count; i<=count+11; i++)
                {
                    if(i==count+3 || i==count+7)
                    {
                        printf("+");
                    }

                    else
                    {
                        printf("%c", 196);
                    }

                    if(i==count+11)
                    {
                        printf("\n ");
                    }
                }

                count=i-1;
                continue;
            }

            else if(count<100)
            {
                printf(" ");
                continue;
            }

            else if(count==100)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<104)
            {
                printf(" ");
                continue;
            }

            else if(count==104)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<108)
            {
                printf(" ");
                continue;
            }

            else if(count==108)
            {
                printf("\n ");
                continue;
            }

            else if(count<112)
            {
                if(count==110)
                {
                    printf("7");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==112)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<116)
            {
                if(count==114)
                {
                    printf("8");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==116)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<120)
            {
                if(count==118)
                {
                    printf("9");
                }

                else
                {
                    printf(" ");
                }

                continue;
            }

            else if(count==120)
            {
                printf("\n ");
                continue;
            }

            else if(count<124)
            {
                printf(" ");
                continue;
            }

            else if(count==124)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<128)
            {
                printf(" ");
                continue;
            }

            else if(count==128)
            {
                printf("%c", 179);
                continue;
            }

            else if(count<132)
            {
                printf(" ");
                continue;
            }

            else if(count==132)
            {
                printf("\n ");
                continue;
            }
        }

        printf("\nEach number denotes a specific position.\n\n");

        Sleep(1000);

        printf("Player 1 ---> O\n");

        Sleep(1000);

        printf("Player 2 ---> X\n");

        Sleep(1000);

        printf("\nTo Start the Game, press ENTER\n\n");

    getch();

    return 0;
}
