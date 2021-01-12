#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a;
    int cyc=2;
    int total2=0;
    
    cin >> a;
    for(int total=2;total<=a;cyc++) total += cyc;
    if(a==1)    cyc=1;
    
    for(int i=1;i<cyc-1;i++)  total2 += i;
    
    if(cyc==1)    cout << "1/1" <<endl;
    else if(cyc%2 == 0){
        int b = a-total2;
        cout << cyc-b << "/" << b << endl;
    }
    else{
        int b = a-total2;
        cout << b << "/" << cyc-b << endl;
    }
    
    return 0;
}
