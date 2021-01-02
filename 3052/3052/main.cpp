#include <iostream>
using namespace  std;
int main(int argc, const char * argv[]) {
    int arr[42]={0,};
    int num=0;
    int j;
    
    for(int i=0;i<10;i++){
        cin >> j;
        arr[j%42]=1;
    }
    for(int i=0;i<42;i++){
        num += arr[i];
    }
    cout << num << endl;
    return 0;
}
