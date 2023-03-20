#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[n][m];
	int mn = 9999999;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int c, d, sum = 0;
	cout << "coordinates of min elements:\n";
	for(int j = 0; j < m; j++){
		for(int i = 0; i < n; i++){
			if(mn > a[i][j]){
				mn = a[i][j];
				c = i + 1;
				d = j + 1;
			}
		} 
		sum += mn;
		cout << c << ';' << d << endl;
		mn = 9999999;
	}
	cout << "\nTheir sum:\n" << sum;
}
