//: Q1.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    vector<string> vec;

    ifstream in("Q1.cpp");
    ofstream out("out.txt");

    string line;
    while (getline(in, line))
        vec.push_back(line); // Add the line to the end

    // Add line numbers:
    for (int i = 0; i < vec.size(); i++)
        cout << i << ": " << vec[i] << endl;

    for (int i = vec.size()-1; i >= 0; i--)
    {
        out << i << ": " << vec[i] << endl;
    }
    out.close();
    in.close();
    return 0;
}
