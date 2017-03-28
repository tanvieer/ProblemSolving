#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<windows.h>

int main()
{
    system("COLOR 03");
    int count, i;
    int turn=0;
    int match[]={0, 0, 0, 0, 0, 0, 0, 0, 0};
    int fix[]={32-48, 32-48, 32-48, 32-48, 32-48, 32-48, 32-48, 32-48, 32-48};
    int choose[9];
    int blink;

    for(blink=0; blink<3; blink++)
    {
        printf("\n\n\n\n\n\n");
        printf("         \x04\x04\x04\x04\x04  \x04  \x04\x04\x04\x04\x04    \x04\x04\x04\x04\x04  \x04\x04\x04\x04\x04  \x04\x04\x04\x04\x04    \x04\x04\x04\x04\x04   \x04\x04\x04   \x04\x04\x04\x04\x04\n");
        printf("           \x04    \x04  \x04          \x04    \x04   \x04  \x04          \x04    \x04   \x04  \x04    \n");
        printf("           \x04    \x04  \x04          \x04    \x04   \x04  \x04          \x04    \x04   \x04  \x04    \n");
        printf("           \x04    \x04  \x04          \x04    \x04   \x04  \x04          \x04    \x04   \x04  \x04    \n");
        printf("           \x04    \x04  \x04          \x04    \x04\x04\x04\x04\x04  \x04          \x04    \x04   \x04  \x04\x04\x04  \n");
        printf("           \x04    \x04  \x04          \x04    \x04   \x04  \x04          \x04    \x04   \x04  \x04    \n");
        printf("           \x04    \x04  \x04          \x04    \x04   \x04  \x04          \x04    \x04   \x04  \x04    \n");
        printf("           \x04    \x04  \x04          \x04    \x04   \x04  \x04          \x04    \x04   \x04  \x04    \n");
        printf("           \x04    \x04  \x04\x04\x04\x04\x04      \x04    \x04   \x04  \x04\x04\x04\x04\x04      \x04     \x04\x04\x04   \x04\x04\x04\x04\x04\n");

        Sleep(500);

        system("CLS");

        Sleep(500);
    }

    while(turn<=9)
    {
        printf("\n\n");

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
                    printf("%c", fix[0]+48);
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
                    printf("%c", fix[1]+48);
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
                    printf("%c", fix[2]+48);
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
                    printf("%c", fix[3]+48);
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
                    printf("%c", fix[4]+48);
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
                    printf("%c", fix[5]+48);
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
                    printf("%c", fix[6]+48);
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
                    printf("%c", fix[7]+48);
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
                    printf("%c", fix[8]+48);
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

        printf("\n\n");

        if(turn!=0)
        {
            if((fix[0]==fix[1] && fix[1]==fix[2] && fix[0]!=32-48) || (fix[0]==fix[3] && fix[3]==fix[6] && fix[0]!=32-48) || (fix[0]==fix[4] && fix[4]==fix[8] && fix[0]!=32-48) || (fix[2]==fix[4] && fix[4]==fix[6] && fix[2]!=32-48) || (fix[2]==fix[5] && fix[5]==fix[8] && fix[2]!=32-48) || (fix[6]==fix[7] && fix[6]==fix[8] && fix[6]!=32-48))
            {
                if(turn%2!=0)
                {
                    printf("Player 1 Wins!\n");
                }

                else
                {
                    printf("Player 2 Wins!\n");
                }

                break;
            }
        }

        if(turn!=9)
        {
            printf("Player %d : ", turn%2+1);
            scanf("%d", &choose[turn]);

            for(i=0; i<9; i++)
            {
                if(choose[turn]==match[i] || choose[turn]>9 || choose[turn]<1)
                {
                    printf("ERROR!\n");

                    break;
                }
            }

            if(i!=9)
            {
                Sleep(1000);
                system("cls");
                continue;
            }

            else
            {
                match[turn]=choose[turn];

                if(turn%2!=0)
                {
                    fix[choose[turn]-1]='X'-48;
                }

                else
                {
                    fix[choose[turn]-1]='O'-48;
                }
            }

            system("cls");
        }

        turn++;
    }

    getch();

    return 0;
}
