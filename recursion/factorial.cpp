#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    int output = factorial(n);
    cout<<"Factorial of a given number :"<<output;
    return 0;
}