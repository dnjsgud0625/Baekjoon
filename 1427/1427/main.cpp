#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string n;
    
    cin >> n;
    sort(n.begin(),n.end(),greater<char>());
    cout << n << endl;
    return 0;
}
