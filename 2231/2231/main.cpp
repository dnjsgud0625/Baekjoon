#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,num=1,sum;
    
    cin >> n;
    for(int i=1;i<n;i++){
        num=i;
        sum=i;
        while(num){
            sum += num%10;
            num /= 10;
        }
        if(n==sum){
            cout << i << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}
