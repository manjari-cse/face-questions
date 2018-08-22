#include <iostream>
using namespace std;
class base
{
    public:
    void fun(int a)
    {
      cout<<a<<" It is an integer\n";
    }
    void fun(double b)
    {
        cout<<b<<" It is a float\n";
    }
    void fun(string c)
    {
        cout<<c<<" It is a string";
    }
};
int main()
{
    base ob;
    ob.fun(2);
    ob.fun(3.3);
    ob.fun("i am");

    return 0;
}
