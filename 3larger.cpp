// Talbert Herndon
// This is my own work.
// In class exercise 1/8/2020

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n1;
    int n2;

    cout << "Please Input 2 numbers you want to compare.\n";
    cout << "First Number: ";
    cin >> n1;
    cout << "Second Number: ";
    cin >> n2;
    if (n1 > n2)
    {
        cout << n1 << " is the greater number. \n";
    };
    if (n2 > n1)
    {
        cout << n2 << " is the greater number. \n";
    };

    return 0;
}