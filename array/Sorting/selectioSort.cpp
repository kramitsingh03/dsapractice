#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter array :";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    //display the sorted array
    cout<<"\nSorted array :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
    
    return 0;
}