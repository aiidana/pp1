#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n];
    string sub="@gmail.com";
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    for(int i=0; i<n; i++){
        if(s[i].find(sub)!= string::npos){
            s[i].erase(s[i].end()-10,s[i].end());
            cout << s[i] << endl;
        }
    }
}