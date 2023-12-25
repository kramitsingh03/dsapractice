#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
       
        
    }
     return -1;
}
int main(){
    int n,key;
    cout<<"Enter size of an array :";
    cin>>n;
    int arr[n];
    cout<<"Enter array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter element to be searched :";
    cin>>key;
    cout<<"Element found at position :"<<linearSearch(arr,n,key)<<endl;

    return 0;
}