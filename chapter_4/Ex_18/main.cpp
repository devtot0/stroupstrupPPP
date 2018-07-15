#include "../../std_lib_facilities.h"

using namespace std;

int main()
{
    double a,b,c,x1,x2;

    cout << "Insert a,b and c:" << endl;
    cin >> a >> b >> c;
    if(a==0)
    {
        cout << "The equation is not quadratic." << endl;
    }
    double delta = (b*b - 4*a*c);

    if(delta>0)
    {
        x1=((-b+sqrt(delta))/2*a);
        x2=((-b-sqrt(delta))/2*a);
        cout << "The equation has two solutions equal to " << x1 << " and " << x2 << endl;
    }
    else if(delta==0)
    {
        x1=(-b/2*a);
        cout << "The equation has one solution equal to " << x1 << endl;
    }
    else if(delta<0)
    {
        cout << "The equation has no solutions." << endl;
    }

    return 0;
}
