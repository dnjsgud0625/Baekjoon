#include <iostream>
using namespace std;

int main() {
  
    double a, b;
    
    while(1){
        cout << "A : ";
        cin >> a;
        if( a <= 0 )
            cout << "out if range" << endl;
        else break;
    }
    
    while(1){
        cout << "B : ";
        cin >> b;
        if( b >= 10 )
            cout << "out of range" << endl;
        else break;
    }
   
    cout << fixed;
    cout.precision(15);
    cout << a/b <<endl;
    
    return 0;
}
