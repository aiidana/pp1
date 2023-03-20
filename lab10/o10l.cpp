#include <bits/stdc++.h>

using namespace std;

void bin(int k){
    if(k==1){
        cout << 1;
        return;
    }
    else{
        bin(k/2);
        cout << k%2;
}
}

int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        bin(a[i]);
        cout << endl;
    }
}