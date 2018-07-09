#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> numbers = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter a digit or spell out digit to convert it into the opposite form:" << endl;
    string digit;
    /* First we have to check whether the input number is a string by comparing it with the elements of the string vector */
    while(cin >> digit)
    {
        int state=-1; //if the state is -1, then the number was input as a digit
        for(int i=0; i<numbers.size(); i++)
        {
            if(numbers[i]==digit)
                state=i; //save a corresponding digit in i
        }
        if(state!=-1)
        {
            cout<< digit << " as a digit for is " << state << endl;
        }
        else
        {


            if (digit == "0")      state = 0;
            else if (digit == "1") state = 1;
            else if (digit == "2") state = 2;
            else if (digit == "3") state = 3;
            else if (digit == "4") state = 4;
            else if (digit == "5") state = 5;
            else if (digit == "6") state = 6;
            else if (digit == "7") state = 7;
            else if (digit == "8") state = 8;
            else if (digit == "9") state = 9;
            else  cout << "Invalid input." << endl;

            cout << digit << " in a spelled out for is " << numbers[state] << endl;

            }

    }
    return 0;
}
