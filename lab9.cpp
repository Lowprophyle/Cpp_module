#include <iostream>

using namespace std;

class Distance
{
  public:
    int feet;
    int inch;

    void getDistance()
    {
        cout << "Enter the feet : ";
        cin >> feet;
        cout << "Enter the inches : ";
        cin >> inch;
    };

    void sumDistance(Distance first, Distance second)
    {
        inch = first.inch + second.inch;
        feet = inch /12;
        inch = inch % 12;
        feet = feet + first.feet + second.feet;
        cout << "The Sum of two distance is : "<<endl;
        cout << "feet = " << feet << " inch = " << inch <<endl;
    };
};

int main()
{
    Distance obj1, obj2, obj3;
    cout << "Distance 1" <<endl;
    obj1.getDistance();
    cout << "Distance 2" <<endl;
    obj2.getDistance();
    
    obj3.sumDistance(obj1, obj2);


    return 0;
}