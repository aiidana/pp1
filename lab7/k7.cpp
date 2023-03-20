#include <bits/stdc++.h>
using namespace std;
int main(){
    //int n;
    //cin >> n;
    //int m,mx;
    //mx=-9999999;
    //if(n != 0){
    //while(n>0){
      //  m=n%10;
        //if(mx<m){
          //  mx=m;
        //}
        //n/=10;
    //}
    //}else{
      //  mx = 0;
    //}
    //if(n=0){
      //  mx = 0;
    //}
    //cout << mx;
    string s;
    cin >> s;
    int mx=-999999;
    for(int i=0; i<s.size(); i++){
      if(s[i]>mx){
        mx=s[i];
      }
    }
    cout << mx-48;

}