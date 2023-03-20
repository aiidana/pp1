#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 
 

 
int main() 
{ 
  int n, k,pos; 
  cin >> n; 
  vector <int> vt; 
 
  for (int i=0; i<n; i++) 
  { 
    int x; 
    cin >> x; 
    vt.push_back(x); 
  } 
 
  cin >> k; 
  int cnt=0; 
  
  for(int j=0;j<k;j++){
    int mn=99999;
    for(int i=0; i<vt.size(); i++){
      if(mn>vt[i]){
        mn=vt[i];
        pos=i;
      }
    }
    cout << mn << " ";
    vt.erase(vt.begin()+pos);
  }

}
