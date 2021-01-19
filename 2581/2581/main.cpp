#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m,n, total=0,min=0;
    bool flag = true;
    cin >> m >> n;
    
    for(int i=m;i<=n;i++){
        flag = true;
        for(int j=2;j<i;j++){
            if(i%j == 0)    flag = false;
        }
        if(flag == true && i!=1){
            if(total == 0)  min=i;
            total += i;
        }
    }
    if(total == 0)  cout << "-1" << endl;
    else    cout << total << endl << min << endl;
    return 0;
}
