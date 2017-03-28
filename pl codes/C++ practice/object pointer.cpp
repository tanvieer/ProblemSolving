#include<iostream>
using namespace std;

class Rectangle
{
    int height;
    int width;
public:
    void set(int h,int w) { height=h; width=w; }
    int area();
};
int Rectangle::area()
{
    return height*width;
}

int main()
{
    Rectangle obj,*p;
    obj.set(5,6);
    cout<<obj.area();

}
