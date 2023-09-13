#include<iostream>
using namespace std;
int main(){
    float cp,sp;
    cout<<"Enter the Cost price :"<<endl;
    cin>>cp;
    cout<<"Enter the Selling price :"<<endl;
    cin>>sp;
    if(sp>cp){
        cout<<"Congrats gain!!"<<endl<<"Gain ="<<sp-cp<<endl;

    }
    else if(cp==sp){
        cout<<"NO PROFIT & NO LOSS "<<endl;
    }
    else{
        cout<<"Bad Luck!! LOSS"<<endl<<"Loss ="<<cp-sp<<endl;
    }
    return 0;
}