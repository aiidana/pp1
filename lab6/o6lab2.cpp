#include <bits/stdc++.h>

using namespace std;
void func(int n){
    int a;
    a=n%10;
    int sum=0;
    while(n>0){
        sum += n % 10;
        n/=10;
    }
    if(sum%a==0) cout << "Yes";
    else cout << "No";
}

int main(){
   int n;
   cin >> n;
   func(n);
   return 0; 
}