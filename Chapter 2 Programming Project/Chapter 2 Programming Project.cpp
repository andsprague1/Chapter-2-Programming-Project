// Chapter 2 Programming Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    int number = 6030;

    //Cacluate digit 1
    int digit1 = number / 1000;
    cout << digit1<<endl;

    //Find digit 2
    int remainder = number % 1000;
    int digit2 = remainder / 100;
    cout << digit2 << endl;

    //digit 3
    remainder = remainder % 100;
    int digit3 = remainder / 10;
    cout << digit3 << endl;

    //digit 4
    remainder = remainder % 10;
    int digit4 = remainder;
    cout << digit4 << endl;

    //Part B
    int seconds = 504;
    int minutes = seconds / 60;
    seconds = seconds % 60;
    cout << seconds << " seconds and " << minutes << " minutes";

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
