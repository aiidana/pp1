#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if((s[i]>=32 && s[i]<65)|| (s[i]>=91 && s[i]<97)|| (s[i]>=123 &&s[i]<127)){
            s.erase(i,1);
            i--;
        }
    }
    cout <<s;
}