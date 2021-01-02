#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num,stu;
    int scr[1000]={0,};
    int total=0;
    double avr=0, rst=0;
    int cnt=0, up=0;
    
    cin >> num;
    while(num != cnt){
        cin >> stu;
        for(int i=0;i<stu;i++){
            cin >> scr[i];
            total += scr[i];
        }
        for(int i=0;i<stu;i++){
            avr = (double)total/stu;
            if(scr[i]>avr) up++;
        }
        cout.setf(ios::fixed);
        cout.precision(3);
        rst = (double)up/stu;
        cout << rst*100.0 << "%" << '\n';
        total = 0;
        avr = 0;
        rst=0;
        up = 0;
        cnt++;
    }
    return 0;
}
