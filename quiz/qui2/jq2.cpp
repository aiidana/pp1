#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m;
    cin >> n;
    int mx=-99999999;
    int mn=999999999;
    while(n>0){
        m=n%10;
        if(m>mx){
          mx=m;
        }
        if(m<mn){
            mn=m;
        }
        n/=10;
    }
    cout << mx << " " << mn;
}