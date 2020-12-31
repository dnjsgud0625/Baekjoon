#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a,b;
    
    while(!cin.eof()){
        cin >> a >> b;
        if(cin.eof()==true) break;
        cout << a+b << '\n';
    }
    return 0;
}
