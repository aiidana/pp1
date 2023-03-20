#include <iostream> 
using namespace std; 
 
int main() 
{ 
    long long int n, l, r,sum=0; 
    cin>>n; 
    cin>>l; 
    cin>>r; 
    long long int arr[n]; 
    for(int i=0;i<n;i++){ 
        cin>>arr[i]; 
    } 
   for(int j=l-1;j<r;j++){ 
        sum+=arr[j]; 
    } 
    cout<<sum; 
}