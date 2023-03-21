#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
    char str[25];
    int Class,roll;

public:
    Student(int x,int y){
    strcpy(str,"Aniruddha Mukherjee");
    Class=x;
    roll=y;

    }
    void showData()
    {
        cout<<"student details : "<<endl<<"Name: "<<str<<endl<<"Class: "<<Class<<endl<<"Roll No: "<<roll<<endl;
    }
};
int main(){
Student s(12,4);
s.showData();
return 0;
}
