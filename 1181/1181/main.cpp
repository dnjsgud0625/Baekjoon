#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool compare(string a, string b);
int main(int argc, const char * argv[]) {
    int n;
    string tmp;
    cin >> n;
    vector<string> vec;
    
    for(int i=0;i<n;i++){
        string  str;
        cin >> str;
        vec.push_back(str);
    }
    sort(vec.begin(),vec.end(),compare);
    
    for(int i=0;i<n;i++){
        if(tmp==vec[i]) continue;
        cout << vec[i]<<'\n';
        tmp=vec[i];
    }
    return 0;
}
bool compare(string a, string b){
    if(a.size()==b.size())  return a<b;
    else    return a.size()<b.size();
}
