#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m, b = 10000000, c = 0, e = 0;
	cin >> n >> m;
	int a[n][m];
	 for(int i = 0; i < n; i++){
	 	e = 0;
	 	for(int j = 0; j<m; j++){
	 		cin >> a[i][j];
	 		e += a[i][j];
		 }
		 if(b>e){
		 	b=e;
		 	c=i+1;
		 }
	 } 
	 cout << c;
}
