#include<iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter the number to print :"<<endl;
    cin>>n;
    for (int i = 1; i < 2*n-15; i+=2)
    {
        cout<<i<<endl;
        count=count+1;
    }
    cout<<"Total count:"<<count<<endl;


    return 0;
}