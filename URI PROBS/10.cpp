/*
                                                  URI Online Judge | 1010
                                                    Simple Calculate

                                            Adapted by Neilor Tonin, URI Brazil
                                                       Timelimit: 1

In this problem the task is read a code for a product 1, the number of units of product 1, the price for one unit of product 1, the code for a product 2, the number of units of product 2, the price for one unit of product 2 and calculates and print the amount to be paid.
Input

The input file contains two lines of data. In each contains 3 numbers: two integers and a floating number with 2 digits after the decimal point.
Output

The output file will contain a message like the following example where "Valor a pagar" means Value to Pay. Remember the space after the ":" and after the "$" symbol. The value must be printed with 2 digits after the point.
Sample Input 	Sample Output

12 1 5.30
16 2 5.10       VALOR A PAGAR: R$ 15.50

*/


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a, b, d;
    float c,e,s = 0.0;
   cin>>a>>b>>c>>a>>d>>e;
    s=(b*(float)c)+(d*(float)e);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<s<<endl;
}
