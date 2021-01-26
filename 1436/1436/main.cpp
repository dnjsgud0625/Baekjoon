#include <iostream>
#include <string>
using namespace std;
int num(int n);
int main(int argc, const char * argv[]) {
    int n;
    
    cin >> n;
    
    cout << num(n) << endl;
    return 0;
}

int num(int n){
    int i=666;
    int num=0;
    string target;
    
    while(1){
        target = to_string(i);
        for(int j=0;j<target.length();j++){
            if(target[j]=='6' && target[j+1]=='6' && target[j+2]=='6'){
                num++;
                if(num==n)  return i;
                break;
            }
        }
        i++;
    }
}
