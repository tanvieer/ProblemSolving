#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define pink2 {int c = 0; c <=255;c++;SetConsoleTextAttribute (hConsole, c=13);}
int main()
{   HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    pink2;
    printf("***  *    * ***      *     *   *     *");
    printf("\n*  * *    * *  *    * *    ** **    * *");
    printf("\n***  *    * ***    *****   * * *   *****");
    printf("\n* *  *    * *  *  *     *  *   *  *     *");
    printf("\n*  *  ****  ***  *       * *   * *       *");
    printf("\n");
    printf("\n    *     ********     *     ***   ");
    printf("\n   * *          *     * *    *   * ");
    printf("\n  *****       *      *****   *   * ");
    printf("\n *     *    *       *     *  *   * ");
    printf("\n*       * ******** *       * ***   ");
    printf("\n");
    printf("\n *   *   ***  *** ******* ***  *** ");
    printf("\n ** **  *   *  *     *    *  *  *  ");
    printf("\n * * *  *   *  *     *    ***   *  ");
    printf("\n *   *  *   *  *     *    * *   *  ");
    printf("\n *   *   ***  ***    *    *  * *** ");

getch();
}

