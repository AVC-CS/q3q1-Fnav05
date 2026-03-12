#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    
    // TODO
    cin >> a >> b >> c;

    // TODO
    // TODO
    // TODO
    double disc = sqrt(b*b - 4*a*c);

    double x1 = (-b + disc) / (2*a); // first root
    double x2 = (-b - disc) / (2*a) ;// second root

    // TODO
    // TODO
    if (x2 > x1) {
        swap(x1, x2);
    }

    cout << setprecision(2) << fixed;
    cout << x1 << " " << x2;
    // TODO

    return 0;
}