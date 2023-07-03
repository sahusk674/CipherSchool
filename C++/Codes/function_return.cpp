#include<iostream>
using namespace std;

int compare(int a)
{
    if (a == 5)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a, b;
    cin >> a;

    b = compare(a);

    cout << b;

    return 0;
}