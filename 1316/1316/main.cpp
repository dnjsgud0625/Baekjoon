#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    char word[100];
    int cnt=0;
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> word;
        bool flag = true;
        size_t len = strlen(word);
        
        for(int j=0;j<len;j++){
            for(int k=0;k<j;k++){
                if(word[j-1]!=word[j] && word[j]==word[k]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag)    cnt++;
    }
    cout << cnt << endl;
    return 0;
}
