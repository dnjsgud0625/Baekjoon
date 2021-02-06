#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
using namespace std;
bool compare(pair<int, string> a,pair<int, string> b);
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    
    vector<pair<int, string>> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i].first >> vec[i].second;
    }
    
    stable_sort(vec.begin(),vec.end(),compare);
    
    for(int i=0;i<n;i++)
    cout << vec[i].first << " " << vec[i].second << '\n';
    return 0;
}
bool compare(pair<int, string> a,pair<int, string> b){
    return a.first < b.first;
}
