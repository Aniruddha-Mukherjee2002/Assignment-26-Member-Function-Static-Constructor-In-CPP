#include<iostream>
using namespace std;
class Bank
{   private:
    int principal;
    static float rate_of_interest;
    static int time;
    public:
    Bank( int x,float y,int z){
    principal=x;
    rate_of_interest=y;
    time=z;
    }
    void showprin()
    {
        cout<<"principal is : "<<principal<<endl;
    }
    static void showrt()
    {
        cout<<"rate of interest is : "<<rate_of_interest<<endl;
    }
   static void showtime()
    {
        cout<<"time is : "<<time<<endl;
    }
   float si(){
    float  sI;
    sI=principal*rate_of_interest*time/100;
    return sI;
    }
};
 float Bank::rate_of_interest;
  int Bank::time;

int main(){
    float res;
Bank b(1000,6.5,5);
b.showprin();
Bank::showrt();
Bank::showtime();
res=b.si();
cout<<"simple interest is : "<<res<<endl;
return 0;
}
