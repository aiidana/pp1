#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	
	int a[n][n];
	int mx = INT_MIN;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
			if(mx<a[i][j]){
				mx = a[i][j];
			}
		}
	}
	cout << mx << '\n';
}
