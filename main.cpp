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
    double d = b*b - 4*a*c;

    double root1 = (-b + sqrt(d)) / (2*a); // first root
    double root2 = (-b - sqrt(d)) / (2*a); // second root

    double big, small;

    // TODO
    if (root2 > root1) {
        big = root1;
        small = root2;
    }
    else {
        big = root2;
        small = root1;
    }

    cout << setprecision(2) << fixed;
    cout << big << " " << small << endl;
    // TODO

    return 0;
}
