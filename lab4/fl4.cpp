 #include <bits/stdc++.h>
 using namespace std;
 
 int main(){
 	
 	int n;
 	cin >> n;
 	
 	int a[n][n];
 	int mx;
 	int c,b;
 	for(int i = 1; i<=n; i++){
 		for(int j = 1; j <=n; j++){
 			cin >> a[i][j];
 			if(mx < a[i][j]){
 				mx = a[i][j];
 				c=i;
 				b=j;
			 }
		 }
	 }cout<<c<<" "<<b;
 }
