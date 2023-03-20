#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  string st;
  int x;
  vector<string> vt;
  vector<int> in;
  for(int i=0; i<n;i++){
    cin >> st;
    cin >> x;
    vt.insert(vt.end(),st);
    in.insert(in.end(),x);
  }
  sort(vt.begin(), vt.end());
  sort(in.begin(), in.end());
  for(int i=0; i<n; i++){
    cout << vt[i] << " " << in[i]<< endl;
  }
}