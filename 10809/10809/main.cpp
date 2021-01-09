#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char word[100];
    int cnt[26]={0,};
    cin >> word;
    for(char i='a';i<='z';i++){
        for(int j=0;j<strlen(word);j++){
            if(word[j]==i){
                cnt[i-97] = j+1;
                break;
            }
        }
    }
    for(int i=0;i<26;i++){
        cout << cnt[i]-1 << " ";
    }
    cout << endl;
    return 0;
}
