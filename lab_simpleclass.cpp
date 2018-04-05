#include <iostream>
#include <string>
using namespace std;

class MyClass{
    public:
    MyClass() {
        cout << "Default constructor" << this << endl;
    }
    ~MyClass() {
        cout << "Destructor" << this << endl;
    }
};
int main(){
    MyClass ob;
    string str;
    cin >> str;
    cout << str <<endl;
    return 0;
}