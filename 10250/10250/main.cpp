#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int t,w,h,n=0;
    int cnt=0;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> h >> w >> n;
        for(int j=1;j<=w;j++){
            for(int k=1;k<=h;k++){
                cnt++;
                if(cnt == n){
                    if(j<10)    cout << k <<"0"<< j <<endl;
                    else    cout << k << j << endl;
                    break;
                }
                else    continue;
            }
        }
        cnt=0;
    }
    return 0;
}
