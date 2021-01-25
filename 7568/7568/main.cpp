#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,cnt=1;
    int arr[50][2]={0,};
    
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)    continue;
            if(arr[i][0]<arr[j][0] && arr[i][1]<arr[j][1])  ++cnt;
        }
        cout << cnt << " ";
        cnt=1;
    }
    cout << endl;
    return 0;
}
