#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    map<string,double> mp;
    int sum=0;
    string s;
    int x;
    for(int i=0; i<n; i++){
        cin >> m;
        for(int j=0; j<m; j++){
            cin >> s;
            cin >> x;
            mp[s]+=x;
            sum+=x;

        }
    }
    map<string,double>::iterator it=mp.begin();
    for(it; it!=mp.end(); it++){
        (*it).second=(*it).second/sum *100;
        cout << (*it).first << " " << (*it).second << endl;
    }

}