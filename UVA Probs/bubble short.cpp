#include <iostream>
using namespace std;
main(){
int Size, i;
cout<<"Enter Array Size: ";
cin>>Size;


int Array[Size];

cout<<"\nEnter Array Elements: ";
for(i = 0; i<Size; i++)
cin>>Array[i];

cout<<"\nShowing array elements: ";
for(i = 0; i<Size; i++)
cout<<Array[i]<<" ";

cout<<"\n\nDoing Bubble sort\n";
cout<<"\nsorting in acending order…";
for(i = 0; i<Size; i++){
for(int j = 0; j<Size-1; j++){
if(Array[j]>Array[j+1]){
int temp_variable;
temp_variable = Array[j];
Array[j] = Array[j+1];
Array[j+1] = temp_variable;
}
}
}
cout<<"\nSorted!\n\nSorted Elements: ";
for(i = 0; i<Size; i++)
cout<<Array[i]<<" ";

}
