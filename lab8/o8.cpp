#include<bits/stdc++.h>
using namespace std;

string tolower(string str){
    for(int i=0; i<str.size(); i++){
        str[i]=tolower(str[i]);
    } 
    return str;
}
int main(){
    string str;
    cin >> str;
    set<char>s;
     str = tolower(str);
    for(int i=0; i<str.size(); i++){
       
        s.insert(str[i]);
    }
    cout << s.size() << endl;
    for(auto it=s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

}