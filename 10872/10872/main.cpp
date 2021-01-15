#include <iostream>
using namespace std;
int factorial(int a);
int main(int argc, const char * argv[]) {
    int n;
    int rst;
    
    cin >> n;
    rst = factorial(n);
    cout << rst << endl;
    return 0;
}

int factorial(int a){
    if(a==1 || a==0)    return 1;
    else return a*factorial(a-1);
}
