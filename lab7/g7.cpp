#include <bits/stdc++.h>

using namespace std;

int func(int n){
    int m=1;
    for(int i=1; i<=n; i++){
        m*=i;
    }
    return m;

}
int main(){
    int n;
    cin >> n;
    cout << func(n);
}