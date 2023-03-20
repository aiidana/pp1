#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    multimap<string,int> str;
    for(int i=0; i<n; i++){
      string s,st;
      int a,b;
      int cnt=0;
      cin >> s >> a >> st>> b;
      string key = s + " and " + st;
      for(auto it:str){
        if(it.first==key && it.second==a+b)cnt++;
      }
      if(cnt==0) str.insert(make_pair(key,a+b));
   
    }
    
    for(auto it=str.begin(); it!=str.end(); it++){
     cout << it->first << " "<< it->second ;
     cout << endl;
    }

}