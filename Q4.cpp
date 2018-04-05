/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//: Q4.cpp

#include <iostream>

using namespace std;

class Circle
{
  private:
    double radius;
    const double PI = 3.1419;

  public:
    double getRad()
    {
        return radius;
    }
    void setRad(double rad)
    {
        radius = rad;
    }
    double calcCircumference()
    {
        return 2 * PI * radius;
    }
    // constructor
    Circle(double rad)
    {
        radius = rad;
        cout << "Circle is created" << endl;
    }
    Circle()
    {
        radius = 0;
    }
    ~Circle()
    {
        cout << "Circle is deleted" << endl;
    }
};

int main()
{

    Circle *A = new Circle(15);
    cout << A->getRad() << endl;
    cout << A->calcCircumference() << endl;

    // Change the radius
    A->setRad(20);
    cout << "The circumference is " << A->calcCircumference() << endl;
    cout << "For a Circle with radius " << A->getRad() << endl;

    delete A;
    return 0;
}
