#include<iostream>
using namespace std;
string f(int n){
  string res;
  int cnt1 = 0, cnt2 = 0, d;
  while(n > 0){
    d = n % 10;
    cnt2++;
    if(d % 2 == 0){
      cnt1++;
    }
    n = n / 10;
  }
  if (cnt1 == cnt2){
    res = "Valid";
  }
  else{
    res = "Not valid";
  }
  return res;
}
int main(){
  int n;
  cin >> n;
  cout << f(n);
  return 0;
}