#include <bits/stdc++.h>

using namespace std;
void func(int *a, int n, int k){
    
     sort(a,a+n);
    for(int i=0; i<n-1; i++){
       if(a[i+1]-a[i]<=k){
        cout << "cheater";
        exit(0);
       }
    }
    cout << "no";
}
int main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    func(a,n,k);
    // sort(a,a+n);
    // for(int i=0; i<n-1; i++){
    //    if(a[i+1]-a[i]<=k){
    //     cout << "Cheater";
    //     return 0;
    //    }
    // }
    // cout << "No";
}