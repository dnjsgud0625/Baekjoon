#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, const char * argv[]) {
    char word[100];
    int cnt=0;
    cin >> word;
    size_t len=strlen(word);
    
    for(int i=0;i<len;i++){
        cnt++;
        if(word[i]=='c' && word[i+1]=='=') cnt--;
        if(word[i]=='c' && word[i+1]=='-') cnt--;
        if(word[i]=='d' && word[i+1]=='z' && word[i+2]=='=') cnt--;
        if(word[i]=='d' && word[i+1]=='-') cnt--;
        if(word[i]=='l' && word[i+1]=='j') cnt--;
        if(word[i]=='n' && word[i+1]=='j') cnt--;
        if(word[i]=='s' && word[i+1]=='=') cnt--;
        if(word[i]=='z' && word[i+1]=='=') cnt--;
    }
    cout << cnt << endl;
    return 0;
}
