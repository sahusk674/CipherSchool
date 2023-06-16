#include<iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter a number:" << endl;
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "The value of a is 1." << endl;
        break;
    
    case 2:
        cout << "The value of a is 2." << endl;
        break;

    case 3:
        cout << "The value of a is 3." << endl;
        break;

    default:
        cout << "default will be always printed.";
        break;
    }
}