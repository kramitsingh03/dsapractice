#include<iostream>
using namespace std;
int largestElement(int arr[],int n){
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i>largest]){
            largest=arr[i];
        }
    }
    return largest;
}
int main(){
    int n;
    cout<<"Enter the size of an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter Element :";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    int largestValue = largestElement(arr,n);
    cout<<"Largest Element present in an array : "<<largestValue;
    return 0;
}