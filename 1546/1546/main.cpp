#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int num;
    double score[1000]={0,};
    double max=0;
    double total=0;

    cin >> num;
    for(int i=0;i<num;i++){
        cin >> score[i];
        if(max<score[i])    max=score[i];
    }
    for(int i=0;i<num;i++){
        score[i] = score[i]/max*100.0;
        total += score[i];
    }
    cout << fixed;
    cout.precision(6);
    cout << total/num << endl;
    return 0;
}
