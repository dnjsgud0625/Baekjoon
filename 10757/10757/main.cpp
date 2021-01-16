#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string A,B;
    int a[10001]={0,},b[10001],rst[10001],carry=0;
    
    cin >> A >> B;
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    
    for(int i=0;i<A.length();i++){
        char num = A.at(i);
        a[i] = atoi(&num);
    }
    for(int i=0;i<B.length();i++){
        char num = B.at(i);
        b[i] = atoi(&num);
    }
    for(int i=0;i<max(A.length(),B.length());i++){
        rst[i] = a[i] + b[i] + carry;
        if(rst[i] >= 10){
            rst[i] -= 10;
            carry = 1;
        }
        else carry = 0;
    }
    if(carry == 1)  cout << "1";
    for(int i=max(A.length(),B.length());i>0;i--){
        cout << rst[i-1];
    }
    cout << endl;
    return 0;
}
