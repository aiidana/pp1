#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    int cnt=0;
    vector<int> vt(n);
    for(int i=0; i<vt.size(); i++){
        cin >> vt[i];
    }
    for(int i=0; i<vt.size(); i++){
        if(k==vt[i]){
            cnt++;
        }
    }
    cout << cnt;
}