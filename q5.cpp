//WAP for finding the volume of the cylinder by taking radius and height as input.
#include<iostream>
using namespace std;
int main(){
    float radius,height;
    float volume;
    cout<<"Enter radius and height :";
    cin>>radius>>height;
    volume=3.14*radius*radius*height;
    cout<<"Volume of a cyclinder :"<<volume<<endl;
    return 0;
}