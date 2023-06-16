#include<iostream>
using namespace std;

int main()
{
    float a,b;

    cout << "Give 2 floating point numbers as input:" << endl;
    cin >> a >> b;

    if (a > 0.01 && b > a)
    {
        cout << "The condition in if statement is correct." << endl;
    }
    else
    {
        cout << "The condition is false." << endl;
    }
    

    if (a > 0.01 || b > a)
    {
        cout << "The condition in if statement is correct." << endl;
    }
    else
    {
        cout << "The condition is false." << endl;
    }
    
    return 0;
     
}