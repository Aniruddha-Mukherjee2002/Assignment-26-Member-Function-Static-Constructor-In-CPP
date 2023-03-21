/*1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)*/

#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setData(int a,int b)
    {
        this->a = a;
        this->b = b;
    }
    void showData()
    {
        cout<<endl<<"Real Part -> "<<a<<" Imaginary Part -> "<<b;
    }
    Complex add(Complex c)
    {
        cout<<endl<<"Addition is : "<<endl;
        Complex temp;
        temp.a = this->a+c.a;
        temp.b = this->b+c.b;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setData(10,3);
    c2.setData(12,4);
    c3 = c1.add(c2);
    c3.showData();
    return 0;
}
