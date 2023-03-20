#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,k;
    cin >> a >> b >> k;
    int cnt=0;
    int mn=min(a,b);
    for(int i=mn; i>=1; i--){
        if(a%i==0 && b%i==0){
            cnt++;
        }
        if(cnt==k){
            cout << i;
            return 0;
        }
    }
    return 0;
}