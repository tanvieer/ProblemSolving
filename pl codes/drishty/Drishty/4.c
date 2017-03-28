#include<stdio.h>
int main()
{
 int mata[3][3],matb[3][3],matc[3][3];
 int r,c,k;
 for(r=0; r<3; r++)
 {
  for(c=0; c<3; c++)
  {
    printf("Enter first matrix(3x3) : ");
    scanf("%d",&mata[r][c]);
  }
 }
 for(r=0; r<3; r++)
 {
  for(c=0; c<3; c++)
  {
    printf("Enter second matrix(3x3) : ");
    scanf("%d",&matb[r][c]);
  }
 }
 for(r=0; r<3; r++)
 {
  for(c=0; c<3; c++)
  {
    matc[r][c]=0;
    for(k=0; k<3;k++)
       matc[r][c]=mata[r][c] + matb[r][c];
  }
 }
 printf("New addition matrix : \n");
 for(r=0; r<3; r++)
 {
  for(c=0; c<3; c++)
     printf(" %d",matc[r][c]);
  printf("\n");
 }
 getch();
 return 0;
}
