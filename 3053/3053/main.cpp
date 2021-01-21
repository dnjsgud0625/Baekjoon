#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int d;
    cin >> d;
    
    cout << fixed;
    cout.precision(6);
    cout << (double)d*d*M_PI << endl;
    cout  << (double)d*d*2 << endl;
    return 0;
}
