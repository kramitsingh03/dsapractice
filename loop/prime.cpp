#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter number:"<<endl;
    cin>>m;
    bool flag=true;
    for (int i = 2; i < m; i++)
    {
        if(m%i==0){
            flag=false;
            break;
        }
    }
    if (m==1)
    {
        cout<<"1 is neither prime nor composite"<<endl;
    }
    else if(flag==false) cout<<m<<" is a composite number";
    else cout<<m<<" is a prime number";
    return 0;
}