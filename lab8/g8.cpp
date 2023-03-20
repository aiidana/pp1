#include <iostream> 
#include <vector> 
using namespace std; 
 
bool isPrime (int n) 
{ 
  int cnt = 0; 
  if (n <= 1) return false; 
  for (int i=1; i<=n; i++) if (n%i == 0) cnt++; 
  if (cnt == 2) return true;  
  else return false; 
} 
 
int main() 
{ 
  int n, k; 
  cin >> n; 
  vector <int> vt; 
 
  for (int i=0; i<n; i++) 
  { 
    int x; 
    cin >> x; 
    vt.push_back(x); 
  } 
 
  cin >> k; 
  int cnt=0; 
 
  for (int i=0; i<vt.size(); i++) 
  if (vt[i] >= k && isPrime(vt[i])) cnt++; 
 
  cout << cnt; 
}
