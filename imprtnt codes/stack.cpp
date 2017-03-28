#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stack>
#include <string.h>

using namespace std;


int main()
{

    stack<int> s;
    int x;
    while(cin>>x)
	{
	s.push(x);
	cout<<"top = "<<s.top()<<endl;
	//cout<<s.pop()<<endl;
	s.pop();

	}



    printf("Answer is %d\n", s.top());

    return 0;
}
