#include<iostream>
using namespace std;

int sum(int , int );

int main()
{
    int a, b;
    int add_sum;

    a = 5;
    b = 3;
    
    add_sum = sum(a, b);

    cout << add_sum;

    return 0;

}

int sum(int a, int b)
{
    int c = a + b;

    return c;
}