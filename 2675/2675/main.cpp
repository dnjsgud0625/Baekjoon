#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, const char * argv[]) {
    char S[20];
    int t,r;
    int cnt=0;
    
    cin >> t;
    while(t!=cnt){
        cin >> r;
        cin >> S;
        for(int i=0;i<strlen(S);i++){
            for(int j=0;j<r;j++){
                cout << S[i];
            }
        }
        cout << endl;
        cnt++;
    }
    return 0;
}
