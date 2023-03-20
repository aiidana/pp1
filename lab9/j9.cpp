#include<iostream>
#include <map>
using namespace std;
int main(){
 int n;
 cin >> n;
 map<string,int> mp;
 for(int i=0; i<n; i++){
    string st;
    cin >> st;
    int x;
    cin >> x;
    mp[st] += x;
   
 }
// map<string,int> :: iterator it=mp.begin();
    for(auto it=mp.begin(); it!=mp.end(); it++){
       cout << it -> first << " " << it -> second << endl;
     }
      
}
