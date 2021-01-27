#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,total=0,min=4000,max=-4000,visit=0,cur=0,many=0;
    int cnt[8001]={0,};

    
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cin >> num[i];
        total += num[i];
        cnt[num[i]+4000]++;
        if(max<num[i]) max=num[i];
        if(min>num[i]) min=num[i];
    }
    sort(num,num+n);
    
    for(int i=0;i<8001;i++){
        if(cnt[i]>visit){
            visit=cnt[i];
            cur=i;
            many=i-4000;
        }
    }
    for(int i=0;i<8001;i++){
        if(cnt[i]==visit && cur<i){
            many=i-4000;
            break;
        }
    }
    cout << round((double)total/n) << endl;
    cout << num[n/2] << endl;
    cout << many << endl;
    cout << max-min << endl;
    
    return 0;
}
