#include <iostream>
using namespace std;

class MyClass {
    public:
    ~MyClass() {
        cout << "Destructor" << this << endl;
    }

    MyClass() :i(0){
        cout << "Default Constructor" << endl; 
    }
    MyClass(int i) :i(i){
        cout << "int " << i << " contructor " << this << endl;
    }
    MyClass( const char* s )    :i(2){
        cout << "char* " << i << " constructor " << this << endl;
    }
    private:
        int i;
};

int main(){
    MyClass ob;
    MyClass ob1(23);
    MyClass ob2("hahahaha");
    string str;
    //cin >> str;
    //cout << str <<endl;
    return 0;
}