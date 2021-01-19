#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int t,n;
    int arr[10001]={0,};

    arr[1]=1;
    for(int i=2;i<10001;i++){
        if(arr[i]==0){
            for(int j=2;i*j<10001;j++){
                arr[i*j]=1;
            }
        }
    }
    
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        for(int i=n/2;i>0;i--){
            if(arr[i]==0 && arr[n-i]==0){
                cout << i << " " << n-i << '\n';
                break;
            }
        }
    }
    return 0;
}
