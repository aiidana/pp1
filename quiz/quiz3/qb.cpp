#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin >> a;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]==a){
            s.erase(i, 1);
            i--;
        }
    }

    cout << s;
    
}