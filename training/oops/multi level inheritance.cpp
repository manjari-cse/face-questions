#include<iostream>
using namespace std;
class base
{
    public:
    void fun1()
    {
        cout<<"base\n";
    }
};
class derived1: public base
{
    public:
    void fun2()
    {
        cout<<"derived 1\n";
    }
};

class derived2: public derived1
{
    public:
    void fun3()
    {
        cout<<"derived 2\n";
    }
};
int main()
{
 derived2 ob;
 ob.fun1();
 ob.fun2();
 ob.fun3();
 return 0;
}
