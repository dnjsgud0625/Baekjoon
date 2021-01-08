#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n;
    int total=0;
    
    cin >> n;
    char arr[n];
    cin >> arr;
    for(int i=0;i<strlen(arr);i++){
        total += arr[i]-'0';
    }
    cout << total << endl;
    return 0;
}
