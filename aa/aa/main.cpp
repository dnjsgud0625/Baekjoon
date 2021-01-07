#include <iostream>
using namespace std;

void swap(int &a, int &b){ //주소값을 넘겨줌
    int tmp;
    
    tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, const char * argv[]) {
    int a=10;
    int b=20;
    
    cout << "A = " << a << "  B = " << b << endl;
    cout << "SWAP!" << endl;
    swap(a,b);
    cout << "A = " << a << "  B = " << b << endl;
    return 0;
}
