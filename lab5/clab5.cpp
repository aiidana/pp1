#include <bits/stdc++.h>

using namespace std;

int main(){
	string s1,s2;
	cin >> s1>> s2;
	bool a = false;
	 for(int i = 0; i<s1.size(); i++){
	 if(s1.substr(i,s2.size())==s2) {
	 	a= true;
		} 
	 	
	 }
	  if(a){
		cout << "YES";
	  }else {
		cout << "NO";
	  }
	 }

