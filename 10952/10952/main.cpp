#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a, b;
    while(1){
        cin >> a >> b;
        if(a!=0 || b!=0)    cout << a+b <<'\n';
        else    break;
    }
    return 0;
}
