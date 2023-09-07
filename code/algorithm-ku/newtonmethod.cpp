//compute square root of positive integre using Newton Raphson method

#include <iostream>

using namespace std;

int main()
{
    double x, y, z;
    cout << "Enter a positive integer: ";
    cin >> x;
    y = x;
    z = 1;
    while (y - z > 0.00001)
    {
        y = (y + z) / 2;
        z = x / y;
    }
    cout << "The square root of " << x << " is " << y << endl;
    return 0;
}

//Code explanation
//The program uses the Newton Raphson method to compute the square root of a positive integer.
//The program first asks the user to enter a positive integer.
//The program then assigns the value of the integer to the variable x.
//The program then assigns the value of x to the variable y.
//The program then assigns the value of x/y to the variable z.
//The program then enters a while loop that runs as long as the difference between y and z is greater than 0.00001.
//The program then assigns the value of (y+z)/2 to the variable y.
//The program then assigns the value of x/y to the variable z.
//The program then exits the while loop.
//The program then prints the square root of x.

