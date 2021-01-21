#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int x1,x2,y1,y2,r1,r2,t,dst,c1,c2;
    
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dst = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        c1 = (r1-r2)*(r1-r2);
        c2 = (r1+r2)*(r1+r2);
        
        if(dst == 0){
            if(c1 == 0)  cout << "-1" << endl;
            else    cout << "0" << endl;
        }
        else if(dst == c1 || dst == c2)    cout << "1" << endl;
        else if(c1 < dst && dst < c2)    cout << "2" << endl;
        else    cout << "0" << endl;
    }
    return 0;
}
