#include <iostream>
using namespace std;

class Demo
{
    int value;

public:
    Demo()
    {
        value = 0;
    }

    Demo(int v)
    {
        value = v;
        cout << "Parameterized Constructor" << endl;
    }

    Demo(const Demo &obj)
    {
        value = obj.value;
        cout << "Copy Constructor" << endl;
    }

    void display()
    {
        cout << value << endl;
    }

    ~Demo()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    Demo obj1;
    obj1.display();

    Demo obj2(50);
    obj2.display();

    Demo obj3(obj2);
    obj3.display();

    return 0;
}