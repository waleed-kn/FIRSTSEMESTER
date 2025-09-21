#include<iostream>
using namespace std;
struct student{
    string name;
    int rollnum;
    float marks;
};
int main()
{
    student student1={"waleed",16799,45.5};
    cout<<"name is "<<student1.name<<endl;
    cout<<"rolll number of the student "<<student1.rollnum<<endl;
    cout<<"marks of the student is "<<student1.marks<<endl;
    student* ptr=&student1;
    ptr->name="khan";
    ptr->rollnum=16790;
    ptr->marks=76;
    cout<<"name is  "<<ptr->name<<endl;
    cout<<"roll number is "<<ptr->rollnum<<endl;
    cout<<"marks of student updated"<<ptr->marks<<endl;
}