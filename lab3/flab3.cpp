#include <iostream> 
using namespace std; 
 
int main() { 
  int i, n; 
  cin >> n;  
  int arr[n]; 
  if(n>=1 && n<=100000) 
  for(i = 0; i < n; i++)  
    cin >> arr[i];  
  if(arr[i]>=10^(-9) && arr[i]<=10^9) 
  for( i =n-1 ;i>=0; i--)  
  cout<<arr[i]<<" "; 
}