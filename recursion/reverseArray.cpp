
#include <bits/stdc++.h>
using namespace std;

void f(int i,int arr[],int n){
    if(i>=n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}


int main()
{
    
    int arr[5] = {10,20,30,40,25};
    f(0,arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}