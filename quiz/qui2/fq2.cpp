#include <bits/stdc++.h> 
using namespace std; 
 
int main(){ 
 int n;cin >> n; 
 bool flag=true; 
    int arr[n][n]; 
     
    for(int i=0 ; i<n ; i++){ 
     for(int j=0; j<n; j++){ 
   
     cin >> arr[i][j]; 
    } 
 } 
  for(int i=0 ; i<n ; i++){ 
   for(int j=0; j<n; j++){ 
    
         if (arr[i][j]!=arr[j][i]){ 
          flag=false; 
          break; 
   } 
 } 
 } 
 cout << (flag ? "Perfect." : "Not perfect."); 
  
}
