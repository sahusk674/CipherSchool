#include<iostream>
using namespace std;

void swap1(int a, int b)
{
    int c;

    c = a;
    a = b;
    b = c;

    cout <<"The value of a & b after swapping: " << a << " " << b << endl;

    return;
}

int main()
{
    int a, b, c;
    int s;

    a = 5;
    b = 3;
    swap1(a, b);

    cout <<"The value of a & b before swapping: " << a << " " << b << endl;

    return 0;

}