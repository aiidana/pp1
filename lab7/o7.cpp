#include <bits/stdc++.h>

using namespace std;
void func(int n, int k){
    int a[100];
    int i=0;
   while(n>0){
    a[i]=n%k;
    n/=k;
    i++;
   }
   for(int j= i-1; j>=0; j-- ){
    if(a[j]>=10){
        char ch = a[j]+55;
        cout<<ch;
    } else {
        cout<<a[j];
    }
   }
   
}
int main(){
    int n,k;
    cin >> n >> k;
    func(n,k);
    return 0;
}