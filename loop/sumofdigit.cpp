//write a program to sum of a given number
#include<iostream>
using namespace std;
int main(){
    int n,lastdigit;
    cout<<"Enter Number:";
    cin>>n;
    int sum=0;
    while(n>0){
        lastdigit=n%10;
        sum=sum+lastdigit;
        n=n/10;
    }
    cout<<"Sum :"<<sum<<endl;
    return 0;
}
