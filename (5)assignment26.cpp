#include<iostream>
using namespace std;
class Date
{
private:
    int day,month,year;
public:
    Date(int x,int y,int z){
    day=x;
    month=y;
    year=z;
    }
    void show()
    {
        cout<<"Date is : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
Date d(10,3,2002);
d.show();
return 0;
}
