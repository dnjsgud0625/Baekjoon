#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int a=0;
    int sum=0;
    cin >> a;
    for(int i=1;i <= a;i++){
        sum+=i;
    }
    cout << sum <<endl;
    return 0;
}

