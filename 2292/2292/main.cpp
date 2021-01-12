#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    int cyc=1;
    cin >> a;
    
    for(int total=2;total<=a;cyc++)
        total += 6*cyc;
    if(a==1)    cyc=1;
    
    cout << cyc << endl;
    return 0;
}
