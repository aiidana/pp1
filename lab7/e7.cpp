#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    double a= log(n)/ log(2);
    if(a==(int)a){
        cout << "Yes";
    }else cout << "No";
}