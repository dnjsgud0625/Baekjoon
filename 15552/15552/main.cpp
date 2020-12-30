#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    
    int a=0;
    int b=0,c=0;
    
    cin >> a;
    for(int i=0;i<a;i++){
        cin >> b >> c;
        cout << b+c << '\n';
    }
    return 0;
}
