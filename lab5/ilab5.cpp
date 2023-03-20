#include <bits/stdc++.h>

using namespace std;

int main(){
	int sums=0;
	int sumt=0;
	string s,t;
	cin >> s >> t;
	
	for(int i = 0; i<s.size(); i++){
		sums += int(s[i]);
	}
   for(int j = 0; j < t.size(); j++){
   	 sumt +=int(t[j]);
   }
   if(sums== sumt){
   	cout << "YES";
   } else{
   	cout << "NO";
   }
}
