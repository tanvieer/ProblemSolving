/*https://www.urionlinejudge.com.br/judge/en/problems/view/1015


                                        Distance Between two points


Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, rounded to four decimal places, according to the formula:

Distance =
Input

The input file contains two lines with data. The first one contains two integer numbers, respectly: x1, y1 and the second one also contains two integer numbers: x2, y2.
Output

Calculate and print the distance, using the above phormula, with 4 digits after the decimal point.
Sample Input 	Sample Output

1 7
5 9              4.4721

*/

/*

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    float Distance;
    cin>>x1>>x2>>y1>>y2;
    Distance=sqrt(abs((x2-x1+(x2-x1)))+(abs((y2-y1)+(y2-y1))));
    cout<<fixed<<setprecision(4)<<Distance<<endl;
}
*/

#include <cstdio>
#include <cmath>

int main(){
    float x1, y1, x2, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    printf("%.4f\n", std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)));
}
