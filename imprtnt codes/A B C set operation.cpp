#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
char infix[40];
int j=0;
stack<char> s;
stack <char> postfix;
int index[40];
char RXY[40],op,RXZ[40];
int r=0,r2=0;
int k=0;

void RX(char *X, char *Y)
{
    if(op=='U')
    {
        for(int i=0; i<k; i++)
        {
            RXY[r]=X[i];
            r++;
        }
        for(int i=0; i<k; i++)
        {
            for(int p=0; p<k; p++)
            {
                if(Y[i]==X[p])
                {
                    goto FNS;
                }
            }
            RXY[r]=Y[i];
            r++;
FNS:
            continue;
        }
    }

    else
    {
        for(int i=0; i<k; i++)
        {
            for(int p=0; p<k; p++)
            {
                if(X[i]==Y[p])
                {
                    RXY[r]=X[i];
                    r++;
                }
            }
        }
    }
}

void RX2(char *X, char *Y)
{
    if(op=='U')
    {
        for(int i=0; i<k; i++)
        {
            RXZ[r2]=X[i];
            r2++;
        }
        for(int i=0; i<r; i++)
        {
            for(int p=0; p<k; p++)
            {
                if(Y[i]==X[p])
                {
                    goto FNS;
                }
            }
            RXZ[r2]=Y[i];
            r++;
FNS:
            continue;
        }
    }

    else
    {
        for(int i=0; i<k; i++)
        {
            for(int p=0; p<r; p++)
            {
                if(X[i]==Y[p])
                {
                    RXZ[r2]=X[i];
                    r2++;
                }
            }
        }
    }
}



void del(int n)
{
    for(int i=n; i<j-3; i++)
    {
        index[i]=index[i+3];
    }
    j-=3;
}
void infix_to_postfix(int l)
{
    for (int i=0; i<l; i++)
    {
        if (infix[i]== '(' || infix[i]== 'U' || infix[i]== '|')
            s.push(infix[i]);
        else if (infix[i]== ')' )
        {
            while(s.top()!='(')
            {
                postfix.push(s.top());
                s.pop();
            }
            s.pop();
        }
        else
            postfix.push(infix[i]);
    }

}

int main()
{
    /*infix[0]='(';
    infix[1]='A';
    infix[2]='U';
    infix[3]='(';
    infix[4]='B';
    infix[5]='|';
    infix[6]='C';
    infix[7]=')';
    infix[8]=')';*/

    char ch[40];
    cout<<"Enter Equation of A B and C: ";
    cin>>ch;
    int sz = strlen(ch);
    for(int i=0; i<strlen(ch); i++)
    {
        if(ch[i] >=65 && ch[i]<=90  && ch[i]!= 'U')
        {
            infix[i] = ch[i]-65;
        }

        else
        {
            infix[i]= ch[i];
        }
    }


    infix_to_postfix(sz);

    while(!postfix.empty())
    {
        index[j]=postfix.top();  // Equation is in index array
        postfix.pop();
        j++;
    }


    char A[40],B[40],C[40];
    int v1,v2;
    cout<<"How many elements per Set :";
    cin>>k;
    cout<< "Enter elements of A : ";
    for(int i=0; i<k; i++)
        cin>>A[i];
    cout<< "Enter elements of B : ";
    for(int i=0; i<k; i++)
        cin>>B[i];
    cout<< "Enter elements of C : ";
    for(int i=0; i<k; i++)
        cin>>C[i];
    for(int i=0; i<j; i++)
    {
        if(index[i]>=0 && index[i]<=2)
        {
            op=(char)index[i-1];

            v1=index[i];
            v2=index[i+1];
            del(i-1);
            break;
        }
    }


    if( ( v1==0 && v2==1) || ( v1 ==1 && v2 == 0 ) )//  A B
    {
        RX(A,B);
    }
    else if ( ( v1==0 && v2==2) || ( v1 ==2 && v2 == 0 ) )//  A C
    {
        RX(A,C);
    }

    else if ( ( v1==1 && v2==2) || ( v1 ==2 && v2 == 1 ) )//  B C
    {
        RX(B,C);
    }

    if(j>2)
    {
        v1=index[1];
        op=(char)index[0];
        if( v1==0 )//  A(BC)
        {
            RX2(A,RXY);
        }
        else if ( v1== 1 )//  B(AC)
        {
            RX2(B,RXY);
        }

        else if (  v1==2  )//  C (AB)
        {
            RX2(C,RXY);
        }

        for(int i=0; i<r2; i++)
        {
            cout<<RXZ[i]<<" ";
        }
    }
    else

        for(int i=0; i<r; i++)
        {
            cout<<RXY[i]<<" ";
        }

    return 0;
}
