#include<bits/stdc++.h>
using namespace std;
int main(){
     string s,t;
     cin >> s >> t;
     char x;
     cin >> x;
     for(int i=0; i<s.size(); i++){
        for(int j=0; j<t.size(); j++){
            if(s[i]==t[j]){
                s[i]=x;
            }
        }
     }
     cout << s;
     

}