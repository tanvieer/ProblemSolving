#include<iostream>
using namespace std;
int main()
{
    int d,h,r,c=1;
    cin>>d>>h;
    for(int i=0;i<d;i++)
    {

        if(c%2==1)
        {
            for(int j=0;j<h;j++)
            {
                cout<<"#";
            }
            cout<<endl;
            c++;
        }
        else if (c%4==0)
          {
              cout<<"#";
            for(int j=0;j<h-1;j++)
                cout<<".";
            c++;
            cout<<endl;
        }
        else if(c%2==0)
        {
            for(int j=0;j<h-1;j++)
                cout<<".";
            cout<<"#"<<endl;
            c++;
        }
    }
    return 0;
}
