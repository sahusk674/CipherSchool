#include<iostream>
using namespace std;

int main()
{
    int i;
    int input;

    for (i = 1; i <= 100; i++)
    {
        cin >> input;
        if (input == 65)
        {
            cout << "Congrats, you have guessed correct.";
            break;
        }
        
    }
    
    return 0;
}