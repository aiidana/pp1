#include <bits/stdc++.h>  
#define ll long long int  
using namespace std;  
  
int main() {  
 ll sum = 0, a;  
 for(;;) {  
  cin >> a;  
  sum += a;  
  if(cin.get() == '\n')break;  
 }  
 cout << sum;  
 return 0;  
}