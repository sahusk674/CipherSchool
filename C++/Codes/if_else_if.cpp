#include<iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Student, please enter your mark to calculate the grade:" << endl;
    cin >> marks;

    if (marks > 90)
    {
        cout << "A";
    }
    else if (marks > 80)
    {
        cout << "B";
    }
    else if (marks > 70)
    {
        cout << "C";
    }
    else
    {
        cout << "Pass";
    }
    
    return 0;
    
}