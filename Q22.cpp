#include <iostream>
#include <string>

using namespace std;
// struct
struct someName
{
    int a;
    string b;
    void setStruct(int num, string text)
    {
        a = num;
        b = text;
    }
    void displayStruct()
    {
        cout << a << endl;
        cout << b << endl;
    }

} Foo;


int main()
{
    Foo.setStruct(456, "def");
    Foo.displayStruct();
    return 0;
}