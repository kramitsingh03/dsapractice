#include <iostream>
#include<string>
#include <sstream>
using namespace std;


class Student{
public:
int ag,std;
string fname,lname;
//FUNCTION CREATION
void set_age(int age){
    ag=age;
}
void set_standard(int standard){
    std=standard;

}
void set_first_name(string first_name){
    fname=first_name;
}
void set_last_name(string last_name){
    lname=last_name;
}
int get_age(){
    return ag;
}
string get_last_name(){
    return lname;
}
string get_first_name(){
    return fname;
}
int get_standard(){
    return std;
}
string to_string(){
    stringstream amit;
    amit << ag <<","<<fname<<","<<lname<<","<<std;
    return amit.str();
}
};
int main() {
    int age, standard;
    string first_name, last_name;
    cout<<"Enter age ,firstname ,last name , standard :"<<endl;
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    cout<<"--------OUTPUT------";
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}