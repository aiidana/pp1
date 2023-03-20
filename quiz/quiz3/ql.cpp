#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    for(int i=0; i<s.size(); i++){

        if((s[i]>='A' && s[i]<'Z') || (s[i]>='a' && s[i]<'z')){
            s[i]=s[i]+1;
        }
         else if(s[i]=='z' ){
            s[i]='a';

        }
         if(s[i]=='Z'){
            s[i]='A';
        }
    }
    cout << s;

}