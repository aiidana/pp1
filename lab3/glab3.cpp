#include <iostream> 
using namespace std; 
#include <stdio.h> 
int main() 
{ 
  int n; 
  cin>>n; 
  int a[n]; 
  for(int i=0;i<n;i++) 
  { 
    cin>>a[i]; 
  } 
  int max=a[0]; 
  int min=a[0]; 
  for(int i=0;i<n;i++) 
  { 
    if(a[i]>max) 
    { 
      max=a[i]; 
    } 
  } 
  for(int i=0;i<n;i++) 
  { 
    if(a[i]<min) 
    { 
      min=a[i]; 
    } 
  } 
  for(int i=0;i<n;i++) 
  { 
    if(max==a[i]){ 
      a[i]=min; 
    } 
    cout<<a[i]<<" "; 
  } 
}