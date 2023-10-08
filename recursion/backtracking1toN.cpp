#include <iostream>

using namespace std;

int print(int i,int n){
    if(i>n){
        return 0;
    }
    
    print(i+1,n);
    cout<<i<<endl;
 
    return 0;
    
}

int main()
{   
    int n;
    cin>>n;
    print(1,n);
    

    return 0;
}