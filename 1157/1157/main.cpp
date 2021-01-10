#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char word[1000000];
    int cnt[26]={0,};
    int max,res=0;
    int sel=0;
    cin >> word;
    int len=strlen(word);
    for(int i=0;i<len;i++){
        word[i] = toupper(word[i]);
    }
    
    for(int i=0;i<len;i++){
        cnt[word[i]-'A']++;
    }
    max=cnt[0];
    for(int i=0;i<26;i++){
        if(max < cnt[i]){
            max = cnt[i];
            sel = i;
            res = 0;
        }
        if(max == cnt[i])   res++;
    }
    if(res>1)   cout << "?" << endl;
    else    cout << (char)(sel+'A') <<endl;
    
    return 0;
}
