#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    multiset<int>vt;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        vt.insert(x);
    }
    for(auto it=vt.rbegin(); it!= vt.rend(); it++){
        if(*it%2==0){
          cout << *it <<" ";
        }//auto it=vt.end(); it!= vt.begin(); it--
    }
    for(auto it=vt.begin(); it!=vt.end(); it++){
        if(*it%2==1){
            cout << *it <<" ";
        }
    }
}