#include <iostream>
#include <string>

using namespace std;

class stck{
private:
    int ar[10]; //stack size is 10
    int i; //for index
public:
    stck(){ i=0; ar[10]={0}; } //constructor

    void ins(int x) //insertion
    {
        ar[i]=x;
        i++;
    }
    int pop() // return and delete
    {
        int j=i;
        i--;
        return ar[j-1];
    }

};

int main()
{
    stck ob;
    ob.ins(50);
    ob.ins(29);
    cout<<ob.pop()<<endl;
    cout<<ob.pop()<<endl;
    return 0;
}
