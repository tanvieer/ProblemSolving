
#include<stdio.h>
#include<string.h>

int number(int num=0)
{   char S[1000];
	gets(S);
    for(int p=0;p<strlen(S);p++)
    {
        if(S[p]!=' ')
            {num++;
            if(S[p+1]!=' ')
              {p++;
               if(S[p+1]!=' ')
                 {
                  p++;
                  if(S[p+1]!=' ')
                    {
                     p++;
                     if(S[p+1]!=' ')
                       {
                        p++;
                        if(S[p+1]!=' ')
                          {
                           p++;
                           if(S[p+1]!=' ')
                             {
                              p++;
                              if(S[p+1]!=' ')
                                {
                                 p++;
                                 if(S[p+1]!=' ')
                                   {
                                    p++;
                                   }
                                }
                             }
                          }
                       }
                    }
                 }
              }
            }

    }
    return num;
}
int main()
   {
       int T,n=9;
       scanf("%d",&T);
    for(int p=0;p<T;p++){

	n=number();
    printf("%d\n",n);
    }}




