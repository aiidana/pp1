#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string>vt(n);
    set<string>ss;
    for(int i=0; i<n; i++){
        cin >> vt[i];
        ss.insert(vt[i]);
    }
    int glb_cnt=0;
    for(auto it=ss.begin(); it!=ss.end(); it++){
        int cnt=0; 
        for(int i=0;i<vt.size(); i++){
            if(*it==vt[i]){
                cnt++;
            }
            if(cnt>1){
                glb_cnt++;
                break;
            }
        }
    }
    cout << glb_cnt;
    return 0;
    
}