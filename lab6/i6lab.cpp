#include <bits/stdc++.h>

using namespace std;

void func(string s){
   for(int i=0; i<s.size(); i++){
    if(i%2==0 && s[i]>='a' && s[i]<='z' ){
        s[i] =s[i]-'a'+'A';
    }
   }
   cout << s;
}
int main(){
    string s;
    cin >> s;
    func(s);
    return 0;
}