#include <bits/stdc++.h>

using namespace std;

void func(int a, int b, int c, int d){
    int mx= max(max(a,b),c);
    if(mx<d){
        mx=d;
    }
    
    cout << mx;
}
int main(){
    int a,b,c,d;
    int n;
    n=4;
    cin >> a >> b>> c >> d;
    func(a,b,c,d);
    return 0;
}