#include<iostream>
using namespace std;
template <typename T>
class MyStack{
private:
	T *Stack, Top, MaxSize;
public:
	MyStack( int Size = 10 );
	~MyStack( void );
	bool IsEmpty( void );
	bool IsFull( void );
	void Push( const T Element );
	void Pop( T &Element );
	void TopElement( T &Element );
	void Reset( void );
	void ShowStack( void );
	int TopIndex( void );
	void ReSize( int Size = 10 );
};
template <typename T>
MyStack<T>::MyStack( int Size ){
	MaxSize = Size;
	Stack = new T[MaxSize];
	if( Stack == NULL ){
		cout << "Memory Error\n";
		exit( 0 );
	}
	Top = 0;
}
template <typename T>
MyStack<T>::~MyStack( void ){
	delete [] Stack;
}
template <typename T>
bool MyStack<T>::IsEmpty( void ){ return (Top == 0); }
template <typename T>
bool MyStack<T>::IsFull( void ){ return (Top == MaxSize); }
template <typename T>
void MyStack<T>::Push( const T Element ){
	if( IsFull() )		ReSize( );
	Stack[ Top++ ] = Element;
}
template <typename T>
void MyStack<T>::Pop( T &Element ){
	if( IsEmpty() ){
		cout << "Stack is Empty\n";
		return;
	}
	Element = Stack[ --Top ];
}
template <typename T>
void MyStack<T>::TopElement( T &Element ){ Element =  Stack[ Top-1 ]; }
template <typename T>
void MyStack<T>::Reset( void ){ Top = 0; }
template <typename T>
void MyStack<T>::ShowStack( void ){
	for(int i=Top-1; i>=0; i--)	cout << Stack[i] << endl;
}
template <typename T>
int MyStack<T>::TopIndex( void ) { return Top; }
template <typename T>
void MyStack<T>::ReSize( int Size ){
	T *S = new T[ MaxSize + Size ];
	if( S == NULL ){
		cout << "Memory Error\n";
		exit( 0 );
	}
	for(int i=0; i<Top; i++)	S[i] = Stack[i];
	delete [] Stack;
	Stack = S;
	MaxSize += Size;
}
