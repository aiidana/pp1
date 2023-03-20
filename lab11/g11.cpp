#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string,set<int> >mp;
    for(int i=0; i<n; i++){
        string st;
        int x;
        cin >> st >> x;
        mp[st].insert(x);

    }
   map<string,set<int>> :: iterator it=mp.begin();
   for(it; it!=mp.end(); it++){
    cout << it->first << " ";
    if((*it).second.size() >=3){
        cout << "+1\n";
    }else{
        cout << "NO BONUS\n";
    }
   }   


   return 0;
}