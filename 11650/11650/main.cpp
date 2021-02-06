#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    vector<pair<int, int>>  loc(n);

    for(int i=0;i<n;i++){
        cin >> loc[i].first >> loc[i].second;
    }
    sort(loc.begin(),loc.end());
    
    for(int i=0;i<n;i++){
        cout << loc[i].first << " " << loc[i].second << '\n';
    }
    return 0;
}
