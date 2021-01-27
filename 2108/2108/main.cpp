#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n,total=0,min=4000,max=-4000,visit=0,cur=0,many=0;
    int cnt[8001]={0,};

    
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin >> vec[i];
        total += vec[i];
        cnt[vec[i]+4000]++;
        if(max<vec[i]) max=vec[i];
        if(min>vec[i]) min=vec[i];
    }
    sort(vec.begin(),vec.end());
    
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
    cout << vec[n/2] << endl;
    cout << many << endl;
    cout << max-min << endl;
    
    return 0;
}
