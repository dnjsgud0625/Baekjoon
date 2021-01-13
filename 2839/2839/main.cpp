#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,cnt=0;
    
    cin >> n;
    while(1){
        if(n%5 == 0){
            cnt += n/5;
            cout << cnt << endl;
            break;
        }
        n -= 3;
        cnt++;
        if(n<0){
            cout << "-1" << endl;
            break;
        }
    }
    return 0;
}
