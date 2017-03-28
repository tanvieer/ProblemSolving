/*


                                           Area


Make a program that reads three floating-point values: A, B and C. Then calculate and print:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the circle of radius C. (pi = 3.14159)
c) the area of the trapezium which has base A and B and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.
Input

The input file contains three double numbers with one digit after the decimal point.
Output

The output file contains 5 lines of data. Each line correspond to one of the areas described above, always with a corresponding message (in portuguese) and one space after the ":" and before the calculated number. All calculated number must be printed with 3 digits after the decimal point.
Sample Input 	Sample Output

3.0 4.0 5.2       TRIANGULO: 7.800
                  CIRCULO: 84.949
                  TRAPEZIO: 18.200
                  QUADRADO: 16.000
                  RETANGULO: 12.000


*/








#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float TRIANGULO(float a,float c)
{
    return (.5*a*c);
}

float CIRCULO(float c)
{
    return (3.14159*pow(c,2));
}

float TRAPEZIO(float a,float b,float c)
{
    return (.5*c*(a+b));
}

float QUADRADO(float b)
{
    return (pow(b,2));
}

int main()
{
    float a,b,c;
    cin>>a>>b>>c>>fixed>>setprecision(1);

    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<TRIANGULO(a,c)<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<CIRCULO(c)<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<TRAPEZIO(a,b,c)<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<QUADRADO(b)<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<a*b<<endl;
}
