#include<iostream>
using namespace std;
class time
{
private:
    int h,m,s;
public:
    void setTime(int x,int y,int z){h=x;m=y;s=z;}
    void showTime(){cout<<endl<<"Hour="<<h<<" Minutes="<<m<<" Seconds="<<s<<endl;}
    time addTime(time t1){
    time t2;
    t2.h=h+t1.h;
    t2.m=m+t1.m;
    t2.s=s+t1.s;
    return t2;
    }
    void normalize(){
    h=0;
    m=0;
    s=0;
    }
};
int main(){
time t,t1,t2;
t.setTime(2,10,30);
t2.setTime(3,20,25);
t.showTime();
t2.showTime();
t1=t.addTime(t2);
t1.showTime();
t1.normalize();
t1.showTime();
return 0;
}

