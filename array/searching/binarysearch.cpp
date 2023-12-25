#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        int start=0;
        int end = n;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid]==key){
                return mid;
            }
            else if(arr[mid]>key){
                end = mid-1;

            }
            else{
                start = mid+1;
            }
        }

    return -1;
    }
}
int main(){
int n,key;
cout<<"Enter the size of an array:"<<endl;
cin>>n;
int arr[n];
cout<<"Enter an array :"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Enter the key to be searched :"<<endl;
cin>>key;
cout<<binarySearch(arr,n,key);


    return 0;
}