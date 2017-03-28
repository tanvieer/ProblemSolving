#include<iostream>
#include"MyStack.h"
using namespace std;
int main()
{
	int i, j;
	char v;
	MyStack<char> S( 4 );
	for(i=0; i<5; i++){
		j = S.TopIndex();
		S.Push( i+'A' );
		if(S.TopIndex() != j) cout << "Element " << (char)(i+'A') << " is pushed\n";
	}
	S.TopElement( v );
	cout << "Top Element in Stack: " << v << endl;
	S.ShowStack( );
	for(i=0; i<5; i++){
		j = S.TopIndex();
		S.Pop( v );
		if(S.TopIndex() != j) cout << v << " is Poped\n";
	}
	cin >> i;
}
