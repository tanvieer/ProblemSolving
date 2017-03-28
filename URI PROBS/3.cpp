/* https://www.urionlinejudge.com.br/judge/en/problems/view/1003



Read two variables A and B. Next, calculate the sum between them and assign it to the variable SOMA. Write the value of this variable.
Input

The input file will contain 2 integer numbers.
Output

Print SOMA according to the following example, with a blank space before and after the equal signal.
Sample Input 	Sample Output

2
5                  SOMA = 7

*/





#include<iostream>
using namespace std;
int main()
{
    int A,B,SOMA;
    cin>>A>>B;
    SOMA=A+B;
    cout<<"SOMA = "<<SOMA<<endl;
}

