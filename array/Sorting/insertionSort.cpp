#include<iostream>
using namespace std;
int selectionSort(int arr[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int lowest = i;
    }
    
}
int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Array :";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    selectionSort(arr,n);
    

    return 0;
}