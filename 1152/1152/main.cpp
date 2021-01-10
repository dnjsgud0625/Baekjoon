#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    int cnt=0;
    getline(cin, s);
    unsigned long len = s.length();
    cnt = 1;
    for(int i=0;i<len;i++){
        if(s[i] == ' ')
            cnt++;
    }
    if(s[0] == ' ') cnt--;
    if(s[len-1] == ' ') cnt--;
    
    cout << cnt << endl;
    return 0;
}
