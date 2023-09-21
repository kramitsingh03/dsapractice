
//1+2-3+4-5+------n series find the result
#include <iostream>
using namespace std;

int main() {    
    int number;
    int i=1;
    int sum=0;

    cout << "Enter an integer: ";
    cin >> number;
    while(i<=number){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
        i++;
    }
    cout << "sum " << sum;    
    return 0;
}