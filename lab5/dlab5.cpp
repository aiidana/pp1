#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool a= true;

    for(int i  = 0; i<s.size() / 2; i++){
        if(s[i] != s[s.size()-1-i]){
            a = false;
        }
    }
    if(a){
        cout << "YES";
    } else {
        cout << "NO";
    }
}