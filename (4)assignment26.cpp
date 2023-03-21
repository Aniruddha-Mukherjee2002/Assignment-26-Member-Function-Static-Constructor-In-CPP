#include<iostream>
using namespace std;
class Counter
{
private:
    int c;
public:
    Counter()
    {
        c = 10;
    }
    ~Counter()
    {
        cout<<c;
    }
};
int main()
{
    Counter c;
    return 0;
}
