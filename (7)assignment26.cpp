#include<iostream>
using namespace std;
class Box
{ private:
    int l,b,h;
public:
    Box(int x,int y,int z){
    l=x;
    b=y;
    h=z;
    }
    void showData()
    {
        cout<<"Volume of the box is : "<<l*b*h<<endl;
    }
};
int main(){
Box b(3,3,6);
b.showData();
return 0;
}
