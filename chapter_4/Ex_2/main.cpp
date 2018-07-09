#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> temps;
    double temp;
    int temp_no=0;
    while (cin >> temp)     //as long as the input corresponds to the type of the variable
    {
        temps.push_back(temp);
        temp_no++;
    }
    //calculating the median
    sort(temps.begin(), temps.end());//using iterators
    if(temp_no%2 != 0)
    {
        cout << "Median: " << temps[temps.size() / 2];
    }
    else
    {

        float mid_temps = ( temps[((temps.size()/2)-1)] + temps[temps.size()/2] );
        cout << "Median: " << (mid_temps/2) << endl;
    }

    return 0;
}
