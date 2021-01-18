#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,cnt=0;;
    int arr[100]={0,};
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i]==2)   cnt++;
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j == 0)   break;
            if(arr[i]%j != 0 && j == arr[i]-1)  cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
