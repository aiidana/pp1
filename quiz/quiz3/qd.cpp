#include<bits/stdc++.h>
using namespace std;
 
void func(int n){
    string st="";
     int i=0;
    string dict="0123456789ABCDEF";
    while(n>0){
        st=dict[n%16]+st;
        n/=16;
    }
    cout << st;
}
int main(){
    int n;
    cin >> n;
    func(n);
}