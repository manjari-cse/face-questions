#include <iostream>
using namespace std;
class base
{
    public:
    virtual void fun()
    {
      cout<<"base\n";
    }

};
class derived: public base
{
    public:
        void fun()
    {
        cout<<"derived\n";
    }
};
int main()
{
    base *ob1;
   derived ob2;
   ob1=&ob2;
   ob1->fun();

    return 0;
}
