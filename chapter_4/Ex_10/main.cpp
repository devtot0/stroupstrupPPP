#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
    vector<string> moves = {"scissors", "paper", "rock"};
    string user_input;


    for(int i=0; i<3; i++)
    {
        cin >> user_input;


        if(user_input==moves[i])
        {
            cout << moves[i] << endl;
            cout <<"It's a draw!" << endl;
        }
        else if(user_input=="scissors" && moves[i]=="paper")
        {
            cout << moves[i] << endl;
            cout << "You win!" << endl;
        }
        else if(user_input=="scissors" && moves[i]=="rock")
        {
            cout << moves[i] << endl;
            cout << "You lose!" << endl;
        }

        else if(user_input=="paper" && moves[i]=="rock")
        {
            cout << moves[i] << endl;
            cout << "You win!" << endl;
        }
        else if(user_input=="paper" && moves[i]=="scissors")
        {
            cout << moves[i] << endl;
            cout << "You lose!" << endl;
        }


        else if(user_input=="rock" && moves[i]=="scissors")
        {
            cout << moves[i] << endl;
            cout << "You win!" << endl;
        }
        else if(user_input=="rock" && moves[i]=="paper")
        {
            cout << moves[i] << endl;
            cout << "You lose!" << endl;
        }

        else if(user_input!="paper" && user_input!="rock" && user_input!="scissors")
        {

            cout << "Wrong input!" << endl;
        }



    }

    return 0;
}
