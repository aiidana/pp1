#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,c,d;
	cin >> n;
	int a[n][n];
	int mx = -99999999;
	for(int i = 0; i <n; i++){
		for(int j = 0; j<n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			if(i==j && mx<a[i][j]){
				mx = a[i][j];
				c = i + 1;
				d = j+1;
			}
		}
	} cout <<"Maximum element is: " << mx << " with coordinates: "<< c << ";" << d;
} //Maximum element is: 5 with coordinates: 1;1
