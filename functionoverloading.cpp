#include <iostream>
using namespace std;
class Findarea{
public:
void area(int b,int h){
 cout<<"Area of triangle :"<<0.5*b*h<<endl;
}
void area(int r){
cout<<"Area of circle :"<<3.14*r*r<<endl;
}
void area(float l,float b){
cout<<"Area of rectangle :"<<l*b<<endl;
}

};
int main(){
int base ,height;
cout<<"Enter Base and height of a triangle :"<<endl;
cin>>base>>height;
int radius;
cout<<"Enter the radius of a circle :"<<endl;
cin>>radius;
float length,breadth;
cout<<"Enter the length and Breadth of a rectsngle :"<<endl;
cin>>length>>breadth;
Findarea obj;
obj.area(base,height);//for triangle
obj.area(radius);//for circle
obj.area(length,breadth);//for rectangle
}