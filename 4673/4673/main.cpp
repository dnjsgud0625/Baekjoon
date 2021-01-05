#include <iostream>
using namespace std;

int arr[10001];
int selfnum(int a){
    int num=a;
    if(a >= 10000){
        num += a/10000;
        a %= 10000;
    }
    if(a >= 1000){
        num += a/1000;
        a %= 1000;
    }
    if(a >= 100){
        num += a/100;
        a %= 100;
    }
    if(a >= 10){
        num += a/10;
        a %= 10;
    }
    return num += a;
}
int main () {
    for(int i=1;i<10001;i++){
        arr[selfnum(i)]=1;
        if(!arr[i]) cout << i << endl;
    }
    return 0;
}
