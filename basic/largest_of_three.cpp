#include <iostream>
using namespace std;

int main()
{
    // Program to find the largest of three numbers

    int a, b, c;
    
    cout << "Enter the number = ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << "Largest number is = " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "Largest number is = " << b;
    }
    else
    {
        cout << "Largest number is = " << c;
    }

    return 0;
}