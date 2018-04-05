/******************************************************************************
Lecture 8 Tutorial
22 March 2017
*******************************************************************************/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>
#include <fstream>

using namespace std;

int main()
{

    ofstream file;
    file.open("lab8_output.txt");

    file << "EXERCISE 1 \n"
            "declare type string var";
    string str1;
    str1 = "Meow";
    file << str1 << endl;
    //cin >> str1;
    file << str1 << endl;

    file << "EXERCISE 2 \n";

    array<int, 10> arr = {1, 2, 3, 6, 12, 32, 2, 5, 9, 12};

    // standard [] operator to extract the array
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        file << arr[i] << " ";
    }
    file << endl; //add new line

    file << "array iterator | equivalent to pointer | if use * on iterator\n"
            "it will get the object location. Use ++ on the iterator to move\n"
            "it to the next entry.\n"
            "Get the inital iterator for the container by calling begin() on\n"
            "the container object and storing the result. and compare the\n"
            "current position against end() to check for reaching the end of\n"
            "container\n";

    for (auto iter = arr.begin(); iter < arr.end(); iter++)
    {
        file << *iter << " "; // need to derefence the pointer iterator
    }
    file << endl;

    file << "EXERCISE 3   -    Algorithm\n"
    "sort the array using iterator\n";

    file << "Sort the array\n";
    sort(arr.begin(), arr.end());
    file << endl;

    for (auto iter = arr.begin(); iter < arr.end(); iter++)
    {
        file << *iter << " "; // need to derefence the pointer iterator
    }
    file << endl;

    reverse_copy(arr.begin(), arr.end(),
                 ostream_iterator<int>(file, " "));

    file << endl;

    file << "EXERCISE 4 -     Testing other container classes\n";

    vector<int> vec(arr.size());
    copy(arr.begin(), arr.end(), vec.begin());

    file << "Contents of vector\n";
    for (auto iter = vec.begin(); iter < vec.end(); iter++)
    {
        file << *iter << ' ';
    }
    file << endl;

    // Insert an item
    vec.insert(vec.begin() + 5, 1000);

    file << "Contents of vector\n";
    for (auto iter = vec.begin(); iter < vec.end(); iter++)
    {
        file << *iter << ' '; // Output the integer values
    }
    file << endl;

    file <<     "EXERCISE 5 -     LIST CONTAINER\n";

    list<string> lst = {string("z"), "m", "down", "up"};

    for (auto iter = lst.begin(); iter != lst.end(); iter++)
    {
        file << *iter << ' '; // Output the string values
    }
    file << endl;

    lst.sort();

    for (auto iter = lst.begin(); iter != lst.end(); iter++)
    {
        file << *iter << ' '; // Output the string values
    }
    file << endl;

    // Create an iterator, move into thelist and start adding strings

    auto listit = lst.begin();
    listit++;
    lst.insert(listit, "Test-string");
    lst.insert(listit, "second-testing");

    for (auto iter = lst.begin(); iter != lst.end(); iter++)
    {
        file << *iter << ' '; // Output the string values
    }
    file << endl;

    file.close();

    return 0;
}