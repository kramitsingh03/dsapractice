#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Digit :";
    cin>>n;
    
    int reverse;
    int count=0;
    cout<<"Reverse Of a number :"<<endl;
    while(n>0){
      reverse=n%10;
      cout<<reverse;
      n=n/10;

      count++;

    }
    cout<<"\n Count:"<<count<<endl;
    return 0;
}