/*

Make a simple program that read two floating numbers corresponding to two tests for a student. After, calculate the average between them, considering that the first number has 3.5 weight and the second one have 7.5 weight. Each number can be from zero to ten, always with one digit after the decimal point. Don’t forget to print end line after the result otherwise you will get “Presentation Error”. Don’t forget the space before and after the equal sign.
Input

The input file will contain 2 floating-point numbers with one digit after the decimal point.
Output

Print MEDIA(average in portuguese) according to the following example, with 5 digits after the decimal point and a blank space before and after the equal signal.
Sample Input 	Sample Output

5.0
7.1              MEDIA = 6.43182*/



#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float A=5.0,B=7.1,MEDIA;
    cin >> fixed >> setprecision(1);
    cin>>A>>B;
    MEDIA = ((A * 3.5) + (B * 7.5)) / (3.5 + 7.5);
   cout << fixed << setprecision(5);
    cout<<"MEDIA = "<<MEDIA<<endl;
}
