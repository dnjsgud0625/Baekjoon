#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, const char * argv[]) {
    char ans[80]={0,};
    int a,total=0;
    int cnt = 0;
    int scr=0;
    
    cin >> a;
    while(a != cnt){
        cin >> ans;
        for(int i=0;i<strlen(ans);i++){
            if(ans[i] == 'O'){
                scr++;
                total += scr;
            }
            else
                scr = 0;
        }
        cout << total << endl;
        cnt++;
        total = 0;
        scr = 0;
    }
    return 0;
}
