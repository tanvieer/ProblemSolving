/*

Read 2 variables, named A and B and make the sum of these two variables, assigning its result to the variable X. Print X as shown below. Print endline after the result otherwise you will get “Presentation Error”.
Input

The input file will contain 2 integer numbers.
Output

Print X according to the following example, with a blank space before and after the equal signal.
Sample Input 	Sample Output

10
9                     X = 19 */




#include<iostream>
using namespace std;
int main()
{
    int A,B,X;
    cin>>A>>B;
    X=A+B;
    cout<<"X = "<<X<<endl;
}
