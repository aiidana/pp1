#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,string > mp;
    for(int i=0; i<n; i++){
        string st;
        cin>> st;
        string ps;
        cin >> ps;
       mp[st]=ps;

    }
    int m;
    cin >> m;
    vector<string> vt;
    for(int i=0; i<m; i++){
        string st,ps;
        cin >> st >> ps;
        if(mp[st]==""){
            vt.push_back("login error");
        }
        else if(mp[st]!=ps){
            vt.push_back("password error");
        }
        else {
            vt.push_back("correct password");
        }
    }
    for(int i=0; i<vt.size(); i++){
        cout << vt[i] << endl;
    }
 
}//11 10 10 10 8