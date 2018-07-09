#include <iostream>

using namespace std;

int main()
{
    double a,b;
    char operation;
    cout << "Please enter the first number, the second number and the operation (+,-,*,/)" << endl;
    cin >> a >> b >> operation;

    switch(operation)
    {
    case '+':
        cout << "The sum of " << a << " and " << b << " is " << a+b << endl;
        break;
    case '-':
        cout << "The difference of " << a << " and " << b << " is " << a-b << endl;
        break;
    case '*':
        cout << "The product of " << a << " and " << b << " is " << a*b << endl;
        break;
    case '/':
        if(b==0)
        {
            cout << "You cannot divide by zero!" << endl;
            break;
        }
        else
        {
            cout << "The quotient of " << a << " and " << b << " is " << a/b << endl;
            break;
        }
    }
    return 0;
}
