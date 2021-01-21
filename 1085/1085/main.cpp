#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int x,y,w,h;
    
    cin >> x >> y >> w >> h;
    int u = h-y;
    int d = y;
    int l = x;
    int r = w-x;
    
    if(u<=d && u<=l && u<=r)   cout << u << endl;
    else if(d<=u && d<=l && d<=r)   cout << d << endl;
    else if(l<=u && l<=d && l<=r)   cout << l << endl;
    else if(r<=d && r<=l && r<=l)   cout << r << endl;
    return 0;
}
