//: Q3.cpp

#include <iostream>

using namespace std;

inline int BAND(int x)
{

  return ((x) > 5 && (x) < 10) ? x : 0;
};

int main()
{

  for (int i = 4; i < 11; i++)
  {
    int a = i;
    cout << "a = " << a << endl
         << '\t';
    cout << "BAND(++a)=" << BAND(++a) << endl;
    cout << "\t a = " << a << endl;
  }
}
