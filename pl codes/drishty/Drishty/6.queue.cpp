
#include <iostream>
#include <string>

using namespace std;

class stck{
private:
    int ar[10]; //queue size is 10
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
    void isEmpty() //checking if queue is empty or not
    {
        if(!i) cout<<"queue is empty"<<endl;
        else cout<<"queue is not empty"<<endl;
    }
    void is_full() //checking if queue is empty or not
    {
        if(i>9) cout<<"queue is full"<<endl;
        else cout<<"queue is not full"<<endl;
    }

};

int main()
{
    stck ob;
    ob.ins(50);
    ob.ins(29);
    cout<<ob.pop()<<endl;
    cout<<ob.pop()<<endl;
    ob.isEmpty();
    ob.is_full();
    return 0;
}
