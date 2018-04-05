/******************************************************************************
Lecture 8 Tutorial
22 March 2017
*******************************************************************************/

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <list>

using namespace std;

int main()
{

    //  create a list to store strings
    //  add a loop asking the user to enter some text and to type 'exit' when they want to finish
    //  accept a string from the user
    //  if the string is the text 'exit' then end the loop
    //  otherwise store the entered text in the list and repeat from step3.
    //  after the user has typed 'exit' you should display the contents of the list to the user

    //  create a new vector (of an appropiate type)
    //  copy the contents of the list to the vector and output them to check that it worked
    //  sort the vector and output the contents again, to show the sort worked
    //  HINT: push_back()

    list<string> listStr1;
    string strTemp;
    cout << "Enter some text and type 'exit' to end it." << endl;
    do
    {
        cin >> strTemp;
        listStr1.push_back(strTemp); //push a COPY of str onto the list
    } while (strTemp != "exit");

    // Output the contents
    for (auto iter = listStr1.begin(); iter != listStr1.end(); iter++)
    {
        cout << *iter << endl;
    }

    vector<int> vecInt(5);
    int n_size = vecInt.size();

    cout << "Enter some numbers, 5 values'" << endl;

    for (int i = 0; i < n_size; i++)
    {
        cin >> vecInt[i];
    }

    // Output the contents
    /*for (auto iter = vecInt.begin(); iter != vecInt.end(); iter++){
        cout << *iter << endl;
    }
    */
    for (int i = 0; i < n_size; i++)
    {
        cout << vecInt[i] << ' ';
    }
    cout << endl;

    return 0;
}