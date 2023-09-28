//swap alternate number in an array
#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if(i+1< n){
            swap(arr[i],arr[i+1]);

        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    //taking input
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapAlternate(arr,n);
    cout<<"result :";
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}