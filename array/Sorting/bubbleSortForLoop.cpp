#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //bubble sort using for loop
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1 ; j++)
        {
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}