#include <iostream>

using namespace std;

class Matrix
{

    int m, n, a[10][10];

  public:
    Matrix(int x, int y);
    void read();
    Matrix operator+(Matrix);
    void display();
};

Matrix::Matrix(int x, int y)
{

    m = x;
    n = y;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }
}

void Matrix::read()
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            a[i][j] = temp;
        }
    }
}

Matrix Matrix::operator+(Matrix x){
    Matrix temp(m,n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.a[i][j] = a[i][j] + x.a[i][j];
        }
    }
    return temp;
}

void Matrix::display(){
    for (int i = 0; i < m; i++)
    {
        cout << endl;
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
    }
}

int main()
{
    int m,n;
    cout << "Enter the size(m,n) of matrix: ";
    cin >> m >> n;
    Matrix first(m,n);
    Matrix second(m,n);
    Matrix third(m,n);
    cout << "Enter matrix 1: enter matrix elements" << endl;
    first.read();
    cout << "Enter matrix 2: enter matrix elements" << endl;
    second.read();
    cout << "matrix 1 + matrix 2"<< endl;
    third = first.operator+(second);
    third.display();

    return 0;
}