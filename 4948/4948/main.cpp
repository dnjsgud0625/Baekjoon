#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    while(1){
        int n, cnt=0;
        int arr[246913]={0,};

        cin >> n;
        if(n==0)    break;
        arr[1]=1;
        for(int i=2;i<=2*n;i++){
            if(arr[i]==0){
                for(int j=2;i*j<=n*2;j++){
                    arr[i*j]=1;
                }
            }
        }
        for(int i=n+1;i<=n*2;i++){
            if(arr[i]==0)   cnt++;
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}
