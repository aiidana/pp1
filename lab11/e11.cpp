#include<bits/stdc++.h>
using namespace std;
string inter(string s1, string s2){
    set<char> st;
    for(int i=0; i<s1.size(); i++){
        for(int j=0; j<s2.size(); j++){
            if(s1[i]==s2[j]){
                st.insert(s2[j]);
            }
        }
    }
    string str="";
    set<char> :: iterator it=st.begin();
    for(it;it!=st.end(); it++){
        str+= *it;
    }
    return str;
}
int main(){
    int n;
    cin >> n;
    vector<string>vt;
    string intertsection="";
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        vt.push_back(s);
    }
    string ans="qwertyuiopasdfghjklzxcvbnm1234567890";
    for(int i=0; i<vt.size(); i++){
        ans=inter(ans,vt[i]);
    }
    if(ans.size()==0){
        cout << "NO COMMON CHARACTERS";
        return 0;
    }
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }



    return 0;
}