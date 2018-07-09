#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<double> cities;
    double temp;
    double sum = 0;
    while(cin >> temp)
    {
        cities.push_back(temp);
        sum += temp;
    }
    sort(cities.begin(), cities.end());

    cout << "Sum of all distances: " << sum << endl;
    cout << "Maximum distance: " << cities.back() << endl;
    cout << "Minimum distance: " << cities.front() << endl;
    cout << "Average distance:  " << sum/cities.size() << endl;
    return 0;
}
