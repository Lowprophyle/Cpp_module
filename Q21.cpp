#include <iostream>
#include <string>

using namespace std;
// struct 
struct someName{
    int a;
    string b;
} Foo;

//global functions

void setStruct(someName *something, int num, string text){
    something->a = num;
    something->b = text; 
}

void getStruct(someName *something){
    cout << something->a << endl;
    cout << something->b << endl;
}
int main (){


    setStruct(&Foo, 123, "abc");
    getStruct(&Foo);
    return 0;
}