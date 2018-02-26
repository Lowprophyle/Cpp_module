#include <iostream>

using namespace std;

class Calculator
{
  public:
    int Calculate(int, int, char);
};

int main()
{
    int x,y, result;
    char oper;
    cout << "HElLO! I'm a calculator" << endl;
    cout << "Please enter num1 operator num2: " << endl;

    cin >> x >> y >> oper;

    Calculator c;
    result = c.Calculate(x, y, oper);
    cout << "Result is: " << result << endl;

    cin.ignore();
    cin.get();
    return 0;
}

int Calculator::Calculate(int x, int y, char oper)
{
    switch (oper)
    {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0;
    }
}