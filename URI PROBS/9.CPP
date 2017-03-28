/*


You have to calculate the final salary for your employee, based on value sold by him. So you have to read his name, his fixed salary and the value sold by him. Your functionary wins 15% over all products sold. Write the final (total) salary of this functionary, rounded to two decimal places.

- Don’t forget to print end line after the result otherwise you will get “Presentation Error”.

- Don’t forget the blank spaces.
Input

The input file contains an string (employee first name), and two double valuse, that are the salary of this employee and the total value sold by him.
Output

Print the total salary of the employee, according to the given example.
Sample Input 	Sample Output

JOAO
500.00
1230.30         TOTAL = R$ 684.54

*/






#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
 float A, B;
 string S;
 cin>>S>>A>>B;
 cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<A+(B*15)/100<<endl;
}
