#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a=0;
    int b,c;
    cin >> a;
    
    for(int i=1;i<=a;i++){
        cin >> b >> c;
        cout << "Case #" << i << ": "
        << b << " + " << c << " = " << b+c <<'\n';
    }
    return 0;
}
