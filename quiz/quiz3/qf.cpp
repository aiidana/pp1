#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='0'&& s[i]<='9')){
            s.erase(i,1);
            i--;
        }
    }
    cout << s;
}