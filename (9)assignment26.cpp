#include<iostream>
using namespace std;
class Bill
{
private:
    char str[25];
    int bill_no;
    float total_unit,total_cost;
public:
    void get(){
    cout<<"Enter name of a/c holder:";
    gets(str);
    cout<<"Enter  bill no:";
    cin>>bill_no;
    cout<<"Enter total unit:";
    cin>>total_unit;
    }
     float calculate_bill(){
    if(total_unit<=100)
    {
        total_cost=total_unit*1.20;
    }
    else if(total_unit>=100&&total_unit<=200)
    {
        total_cost=total_unit*2;
    }
    else if(total_unit>200)
    {
        total_cost=total_unit*3;
    }
    return total_cost;
    }
};
int main(){
Bill b;
b.get();
float result=b.calculate_bill();
cout<<"Total cost of your electricity is : "<<result<<endl;
return 0;
}
