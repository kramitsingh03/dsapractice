// sort array in increasing order 
//input : 101010110
//output: 0000011111

#include<bits/stdc++.h>
using namespace std;
void sorting(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j){
            i++;
        }
        while(arr[j]==1  && i<j){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter Size of an array :";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sorting(arr,n);
    display(arr,n);
    return 0;
}