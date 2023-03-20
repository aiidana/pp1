#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >>n;
    int m;
    cin >> m;
    vector<int>vt;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        vt.push_back(x);
    }
    rotate(vt.begin(),vt.begin()+m,vt.end());
    reverse(vt.begin(),vt.end());
    vector<int> :: iterator it = vt.begin();
    for(it; it!=vt.end(); it++){
      cout << *it << " " ;
    }
}