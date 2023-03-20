#include <bits/stdc++.h> 
using namespace std; 
  
int gcd(int a, int b){ 
    int rem = a % b; 
    if(rem == 0){ 
        return b; 
    } 
    else{ 
        return gcd(b, rem); 
    } 
} 
 
int main() 
{ 
    int n; 
    cin>>n; 
    int a[1000]; 
    for(int i=0; i<n; i++){ 
       cin>>a[i]; 
    } 
    int largest=1; 
    for(int i=0; i<n; i++){ 
       for(int t=i+1; t<n; t++){ 
         largest=max(largest, gcd(a[i], a[t])); 
        } 
    } 
    cout<<largest; 
}
