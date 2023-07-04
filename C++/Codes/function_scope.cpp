#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;

    return c;
}

int main()
{
    int a, b, c;
    int add_sum;

    a = 5;
    b = 3;
    c = 100;
    add_sum = sum(a, b);

    cout <<"The value of C in sum function: " << add_sum << endl;
    cout <<"The value of C in main function: " << c << endl;

    return 0;

}