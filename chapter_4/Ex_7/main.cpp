#include <iostream>
#include <vector>

using namespace std;

int convert_to_number(string value)
{
    vector<string> numbers = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    const int invalid = -1;//if none of the methods of conversion were used, mark real_digit as an invalid input
    int real_digit = invalid;


    for(int i=0; i<numbers.size(); i++) //if the number was entered in spelled-out format
    {
        if(value == numbers[i])
            return i;
    }

    if(value == "0")      real_digit = 0;
    else if(value == "1") real_digit = 1;
    else if(value == "2") real_digit = 2;
    else if(value == "3") real_digit = 3;
    else if(value == "4") real_digit = 4;
    else if(value == "5") real_digit = 5;
    else if(value == "6") real_digit = 6;
    else if(value == "7") real_digit = 7;
    else if(value == "8") real_digit = 8;
    else if(value == "9") real_digit = 9;

    return real_digit;
}

int main()
{
    string a,b;
    char operation;
    cout << "Please enter the first number, the second number and the operation (+,-,*,/)" << endl;
    cin >> a >> b >> operation;
    int left, right;
    left=convert_to_number(a);
    right=convert_to_number(b);
    const int invalid = -1;
    if (left == -1 || right == -1)
    cout << "Invalid input." << endl;

    switch(operation)
    {
    case '+':
        cout << "The sum of " << left << " and " << right << " is " << left+right << endl;
        break;
    case '-':
        cout << "The difference of " << left << " and " << right << " is " << left-right << endl;
        break;
    case '*':
        cout << "The product of " << left << " and " << right << " is " << left*right << endl;
        break;
    case '/':
        if(right==0)
        {
            cout << "You cannot divide by zero!" << endl;
            break;
        }
        else
        {
            cout << "The quotient of " << left << " and " << right << " is " << left/right << endl;
            break;
        }

		default:
			cout << "Unknown operation." << endl;
        break;
    }
    return 0;
}
