//WAP to find the difference between ASCII of two characters ,take them as input
#include <iostream>
using namespace std;
int main()
{
char x;
cout<<"Enter first character :\n";
cin>>x; // user will give 'x' a value.
char y;
cout<<"Enter Second character :";
cin>>y; // user will give 'y' a value.
int z= (int)x-(int)y; //difference of ascii value
cout<<z;
return 0;
}