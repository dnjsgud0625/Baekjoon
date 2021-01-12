#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b,c;
    int pnt;
    
    cin >> a >> b >> c;
    if(c>b) pnt = ceil(a/(c-b))+1;
    else    pnt = -1;
    
    cout << pnt << endl;
    return 0;
}
