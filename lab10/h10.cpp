#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>vt;
    set<int>s;
    int x,k;
    for(int i=0; i<n; i++){
        cin >> k;
        x=s.size();
        s.insert(k);
        if(x!=s.size()){
            vt.push_back(k);
        }
    }
    do{
    for(int i=0; i<vt.size(); i++){
        cout << vt[i] << " ";
    }
    cout << endl;
    }while(next_permutation(vt.begin(), vt.end()));
    return 0;
}