#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,v;
    
    cin >> a >> b >> v;
    
    int day = ceil((double)(v-a)/(a-b));

    cout << day+1 << endl;
    return 0;
}
