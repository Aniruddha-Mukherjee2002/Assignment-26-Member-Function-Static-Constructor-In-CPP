#include<iostream>
using namespace std;
class Cube
{
private:
    int a;
public:

    showData()
    {
        cout<<"Volume of cube is "<<a*a*a<<endl;
    }

Cube(int x){
a=x;
}
};
int main(){
Cube c1(3);
c1.showData();
return 0;
}
