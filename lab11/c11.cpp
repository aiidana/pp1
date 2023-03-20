// #include<bits/stdc++.h>
// using sspace std;
// bool comp(pair<string,float>pr1, pair<string,float>pr2){
//     if(pr2.second<pr1.second) return true;
//     return false;
// }
// int main(){
//     int n;
//     cin >> n;
//     int sum=0;
//     map<string,double> mp;
//     for(int i=0; i<n; i++){
//         string s;
//         cin >> s;
//         int k;
//         cin >> k;
//         sum+=k;
//         mp[s]+=k;

//     }
//     vector<pair<double,string>>vt;
//     map<string, double> :: iterator it=mp.begin();
//     for(it; it!=mp.end(); it++){
//       mp[it-> first]=(it->second*100)/sum;
//       vt.push_back(make_pair(it->first, it->second));
//     }
//     sort(vt.rbegin(), vt.rend(),comp);
//     for(int i=0; i<vt.size(); i++){
//         cout << vt[i].first << " " << vt[i].second << "%\n" ;
//     }
// }
#include <bits/stdc++.h>

using namespace std;

map <string, int> m;

int main()
{ 
 int n;
 cin >> n;
 int total = 0;
 for (int i = 0; i < n; i++) {
  string name;
  int point;
  cin >> name >> point;
  m[name]+=point;
  total+=point;
 }

 vector <pair <double, string> > v;
 
 map <string, int> ::iterator it = m.begin();
 for (it = m.begin(); it!=m.end(); it++) {
  v.push_back(make_pair((double)it->second/total*100.0, it->first));
 }
 sort(v.rbegin(), v.rend());
 for (int i = 0; i < v.size(); i++)
  cout << v[i].second << " " << v[i].first << "%" << endl;
}
