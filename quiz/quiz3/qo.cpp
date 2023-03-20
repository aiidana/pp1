#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    if(s.size()==1){
        cout << s << " " << 1;
        return 0;
    }
    int cnt=1;
    int max=0;
    char x;
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1]){
            cnt+=1;
        }else{
            if(cnt>max){
               x=s[i];
               max=cnt; 
            }
            cnt=1;
        }
    }
    if(s[s.size()-1]==s[s.size()-2]){
        if(cnt>max){
           cout << s[s.size() - 1] << " " << cnt;
           return 0;
        }
        // else{
        //     cout << x << " " << max;
        // }
    }
    cout << x << " " << max;
    return 0;
}
