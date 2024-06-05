#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int rol;
    float marks;

    student(string name, int rol, float marks){
              this->name = name;
              this->marks = marks;
              this->rol = rol;
    }



};


// pass by value 


void change(student *s){
    // (*s).name = "nik";
    s->name = "nikh";
}

int main(){
    student s("nikhil",45,46.75);
    cout<<s.name<<s.marks<<endl;
    change(&s);
    cout<<s.name;
    // s.name = "nikhil";
    // s.marks = 45;
    // cout<<s.name<<" "<<s.marks;
}