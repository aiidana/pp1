#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin >> s;
 stack<char>st;
 reverse(s.begin(),s.end());
 for(int i=0; i<s.size(); i++){
    if(st.empty()){
        st.push(s[i]);
    }
    else if(st.top()=='1' and s[i]=='1'){
        st.pop();
    }else{
            st.push(s[i]);
    }
 }
  
  while(!st.empty()){
    cout << st.top();
    st.pop();
  }

    
}                                                                                                                                                                                                                                                                                            