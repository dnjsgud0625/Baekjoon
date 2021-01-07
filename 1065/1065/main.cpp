#include <iostream>
using namespace std;

int hansu(int a){
    int cnt=0;
    int h=0, t=0, o=0;
    if(a<100)   return a;
    else{
        for(int i=100; i<=a; i++){
            h = i/100;
            t = (i%100)/10;
            o = (i%100)%10;
            if(o-t == t-h)  cnt++;
        }
        return cnt+99;
    }
}

int main(int argc, const char * argv[]) {
    int num;
    int result;
    cin >> num;
    
    result = hansu(num);
    
    cout << result << endl;
    return 0;
}
