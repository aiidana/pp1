#include<bits/stdc++.h>
using namespace std;
bool  func(string st){
  for(int i=0; i<st.size(); i++){
    if(isdigit(st[i])) return false;
  }
  return true;
}
int main(){
    string st;
    while(cin >> st){
        if(func(st)){
            cout << st << endl;
        }
    }

 
}