//Write a program to reverse of a given number
#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter number :"<<endl;
cin>>n;
int lastdigit;
while (n>0)
{
  lastdigit=n%10;
  cout<<lastdigit<<" ";
  n/=10;
}

return 0;
}