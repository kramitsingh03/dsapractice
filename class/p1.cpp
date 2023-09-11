#include<iostream>
using namespace std;
class Book{
    public:
    string title;
    string genre;
    string author;
    int page;
    float price;
    void input(){
        cout<<"Enter title :";
        cin>>title;
        cout<<"\nEnter Genre :";
        cin>>genre;
        cout<<"\nEnter Author :";
        cin>>author;
        cout<<endl<<"Enter Pages :";
        cin>>page;
        cout<<endl<<"Enter price :";
        cin>>price;
    }
    void display(){
        cout<<"--------------------------------------------"<<endl;
        cout<<"Book Title :"<<title<<endl;
        cout<<"Book Genre :"<<genre<<endl;
        cout<<"Book Author :"<<author<<endl;
        cout<<"Book Pages:"<<page<<endl;
        cout<<"Book Price :"<<price<<endl;

    }
};
//main function start here
int main(){
    int n;
    Book obj;
    obj.input();
    obj.display();
    
}