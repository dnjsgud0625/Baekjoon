#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[9];
    int max=0,j=0;
    for(int i=0;i<9;i++){
        cin >> arr[i];
        if(max < arr[i]){
            max = arr[i];
            j=i+1;
        }
    }
    cout << max << endl << j << endl;
    return 0;
}
