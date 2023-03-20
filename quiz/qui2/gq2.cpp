#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
 int n , m , t; 
 cin >> n>> m >> t; 
 if(t==1){ 
  for(int i=ceil(sqrt(n)); i<=sqrt(m); i++){ 
   if(ceil(sqrt(i*i))==floor(sqrt(i*i))){ 
    cout << i*i<<" "; 
   } 
  } 
 } 
 if(t==-1){ 
  for(int i=floor(sqrt(m)); i>=sqrt(n); i--){ 
   if(ceil(sqrt(i*i))==floor(sqrt(i*i))){ 
    cout << i*i<<" "; 
   } 
  } 
 } 
     
}
