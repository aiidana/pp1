#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m,x;
	cin >> n >> m;
	
	int a[n][m];
	for(int i = 0; i< n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j = 0; j<m; j++){
			int  c = sqrt(a[i][j]);
			if(c * c == a[i][j]){
				a[i][j] = c;
			}
		}

	}
	for(int i = 0; i< n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j] << ' ' ;
		}
		cout << endl;
	} 		
}
