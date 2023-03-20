#include <iostream> 
using namespace std; 
int main(){ 
  long long int n; 
 
  cin>>n; 
  long long int arr[n]; 
 
  long long int sum =0; 
 
  for(int i=0;i<n;i++){ 
    cin>>arr[i]; 
  } 
  int i=0; 
 
  while(i<n){ 
    sum+=arr[i]; 
    i++; 
  } 
  cout<<sum; 
}