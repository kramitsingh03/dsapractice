#include<iostream>
using namespace std;

int factorial(int x){

int fact=1;

for(int i=1;i<=x;i++){
    fact=fact*i;
}
return fact;
}
int ncr(int n, int r){
    int result = (factorial(n))/((factorial(r))*(factorial(n-r)));
    return result;
}
int npr(int n,int r){
    int result1 =(factorial(n))/(factorial(n-r));
}
int main(){
    int n,r;
    cout<<"-------permutation and combination----------"<<endl;
    cout<<"Enter n and r :"<<endl;
    cin>>n>>r;
    
    int combination=ncr(n,r);
    int permutation=npr(n,r);
    cout<<"ncr :"<<combination<<endl;
    cout<<"npr :"<<permutation<<endl;
    return 0;
}