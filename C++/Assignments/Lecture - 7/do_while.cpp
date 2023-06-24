#include<iostream>
using namespace std;

int main()
{
    int pass;

    do
    {
        cout << "Enter the Password: "<< endl;
        cin >> pass;
    } while (pass < 999999);
    
    cout << "You entered a correct Password.";

    return 0;
}