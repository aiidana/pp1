#include <bits/stdc++.h>

using namespace std;

void func(int n){
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=n-1; i>=0; i--){
        cout << a[i] << " ";
    }

}
int main(){
    int n;
    cin >> n;
    func(n);
    return 0;
}