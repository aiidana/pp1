#include<bits/stdc++.h> 
using namespace std; 
int a[1001]; 
int main(){ 
 int n; 
 cin >> n; 
 for(int i=0 ; i<n; i++){ 
  int x; 
  cin >> x; 
  a[x]++; 
 } 
 int mx=0; 
  
 for(int i=0; i<1001; i++){ 
  if(mx<a[i]){ 
   mx=a[i]; 
  } 
 } 
 for(int i=1000; i>=1; i--){ 
  if(a[i]==mx){ 
   cout << i <<" "; 
  } 
 } 
}
