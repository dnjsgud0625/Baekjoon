#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int arr[1000001]={};
    int a;
    int min = 1000000;
    int max = -1000000;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> arr[i];
        if(min>arr[i])  min = arr[i];
        if(max<arr[i])  max = arr[i];
    }
   
    cout << min << " " << max << '\n';
    return 0;
}
