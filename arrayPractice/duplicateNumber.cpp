
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n) {
  set < int > st;
  for (int i = 0; i < n; i++) {
    st.insert(arr[i]);
  }
  int size = st.size();
  int j = 0;
  for (int x: st) {
    arr[j++] = x;
  }
 for (int i = 0; i < size; i++)
 {
    cout<<arr[i]<<" ";
 }
 
}
int main() {
  int arr[] = {1,1,2,3,2,3,3,4,4,5,5,6,6};
  int n = sizeof(arr)/sizeof(arr[0]);
 removeDuplicates(arr, n);
 
}
