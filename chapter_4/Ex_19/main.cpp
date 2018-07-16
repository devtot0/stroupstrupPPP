#include "../../std_lib_facilities.h"

using namespace std;

bool if_exists(string name_ar)
{
}

int main()
{
    int number;
    string name;
    vector<string> names;
    vector<int> scores;
    int i=0;
    while(cin>>name>>number); // if "No more" is entered, then "more" string gets inside int type variable and the while condition is not met
    {
        int occurence=0;
        for (int i = 0; i < names.size(); i++)
        {
            if(name == names[i])
            {
                occurence = 1;
            }

            if(occurence==0)
            {
                names.push_back(name);
                scores.push_back(number);
            }
            else{cout<<"A name cannot be entered twice"<<endl;}

        }

    }


    for(int i=0; i<names.size(); i++)
    {
        cout << names[i] << " " << scores[i] << endl;
    }
    return 0;
}
