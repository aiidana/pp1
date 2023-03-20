#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,limit;
    cin >> n>> m;
    int a[n][m];
    bool x = false;

    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }
    cin >> limit;
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
           if(a[i][j]>limit){
            x=true;
           }
        }
    }
    if(x){
        cout << "Penalty!";
    }else{
        cout << "No penalty for today.";
    }
}