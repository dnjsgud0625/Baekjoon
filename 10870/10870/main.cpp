#include <iostream>
using namespace std;
int fibonacci(int a);

int main(int argc, const char * argv[]) {
    int n;
    int rst;
    
    cin >> n;
    rst = fibonacci(n);
    cout << rst << endl;
    return 0;
}
int fibonacci(int a){
    if(a == 0 ) return 0;
    else if(a == 1 ) return 1;
    else    return fibonacci(a-2) + fibonacci(a-1);
}
