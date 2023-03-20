#include <bits/stdc++.h>

using namespace std;

 void func(string s){
    string str = "AEOIUaeuio";
    for(int i=0; i<s.size(); i++){
        for(int j = 0; j < str.size(); j++){
            if(s[i] == str[j]){
                s.erase(i,1);
                i--;
                break;
            }
        }
    }
    cout << s;
}
int main(){
    string s;
    getline(cin,s);
    func(s);

}
