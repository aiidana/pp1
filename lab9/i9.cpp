#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,bool> mp;
    vector<string> vt;
    for(int i=0; i<n; i++){
     string st;
     cin >> st;
     if(mp[st]==false){
        vt.push_back( "new user added");
        mp[st]=true;
     }else{
       vt.push_back( "user already exists");
     }

    }

      for(int i=0; i<vt.size(); i++){
        cout << vt[i] << endl;
      }
}