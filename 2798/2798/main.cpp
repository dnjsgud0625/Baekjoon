#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,m,max=0,sum;
    int arr[100];
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                sum = arr[i] + arr[j] + arr[k];
                if(sum > max && sum <=m)    max=sum;
            }
        }
    }
    cout << max << endl;
    return 0;
}
