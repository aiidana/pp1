#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>vt(n);
    for(int i=0; i<n; i++){
        cin >> vt[i];
    }
    int cnt=0;
    for(int i=0; i<vt.size(); i++){
        if(vt[i]%10==7){
            cnt++;
        }
    }
    cout << cnt;
}