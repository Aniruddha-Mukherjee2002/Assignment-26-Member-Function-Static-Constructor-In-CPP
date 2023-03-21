#include<iostream>
using namespace std;
class StaticCount
{  private:
    static int counter;
public:
    static int counting()
    {
        counter++;
        return counter;
    }

};
int StaticCount::counter=0;
int main()
{    int x;
    for(int i=0;i<3;i++)
    {
        x=StaticCount::counting();
    }
    cout<<x<<endl;
}
