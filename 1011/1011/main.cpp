#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    double x,y,dst;
    
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> x >> y;
        dst = y-x;
        double j=1;
        while(j*j <= dst)   j++;
        j--;
        double mid = dst - j*j;
        mid = ceil(mid/j);
        
        cout << j*2 - 1 + mid << '\n';
    }
    return 0;
}
