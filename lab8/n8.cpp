#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    set<int>s;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    for(auto it=s.begin(); it != s.end(); it++){
       if(*it %2!=0) cout << *it<<" ";
    }

}