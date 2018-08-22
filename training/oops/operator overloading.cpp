#include<iostream>
using namespace std;
class base
{private:
    int num=8;
    public:
    void operator ++()
    {
        num=num+2;
    }
    void disp()
    {
        cout<<num;
    }
};
int main()
{
 base ob;
 ++ob;
 ob.disp();
 return 0;
}
