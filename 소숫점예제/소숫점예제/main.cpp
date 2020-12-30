#include <iostream>
using namespace std;

int main () {
    double a=13.579135;
//    1
    cout << a << endl;
//    2
    cout.precision(5);
    cout << a << endl;
//    3
    cout << fixed;
    cout.precision(6);
    cout << a << endl;
//    4
    cout.unsetf(ios::fixed);
    cout << a << endl;
//    5
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << a << endl;
}

