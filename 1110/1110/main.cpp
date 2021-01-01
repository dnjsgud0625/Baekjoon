#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int a=0;
    int b=0,c=0,d=0;
    int cnt=0;
    cin >> a;
    b=a/10;
    c=a%10;
    while(a!=d){
        d=c*10+(b+c)%10;
        b=d/10;
        c=d%10;
        cnt++;
    }
    if(a==0) cnt++;
    cout << cnt << endl;
    return 0;
}
