#include <iostream>
using namespace std;
void hanoi(int n, int from, int to, int by);

int main(int argc, const char * argv[]) {
    int n;

    cin >> n;
    cout << (1<<n)-1 << endl;
    hanoi(n,1,3,2);

    return 0;
}
void hanoi(int n, int from, int to, int by){
    if(n==1)    cout << from << " " << to << '\n';
    else{
        hanoi(n-1, from, by, to);
        cout << from << " " << to << '\n';
        hanoi(n-1, by, to, from);
    }
}
