#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    string ch;
    cout<<"Enter the name"<<endl;
    cin>>ch;
    stringstream ss;
    ss<<ch;
    string cha;
    ss>>cha;
    cout<<cha;
    return 0;
}