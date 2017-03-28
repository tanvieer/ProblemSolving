/*


Make a simple program that reads four variables named A, B, C and D. Calculate and print the difference of the product of A and B with the product of C and D (A * B - C * D).
Input

The input file contains 4 integer numbers.
Output

Print DIFERENCA (DIFFERENCE in portuguese) according to the following example, with a blank space before and after the equal signal.
Sample Input 	Sample Output

5
6
7
8                   DIFERENCA = -26
*/



#include<iostream>
using namespace std;
int main()
{
    int A,B,C,D,DIFERENCA;
    cin>>A>>B>>C>>D;
    DIFERENCA=(A * B - C * D);
    cout<<"DIFERENCA = "<<DIFERENCA<<endl;
}
