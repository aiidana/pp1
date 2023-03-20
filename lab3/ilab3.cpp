 #include <iostream> 
using namespace std; 
 
int main() 
{ 
    int n, l, r,sum=0; 
    cin>>n; 
    cin>>l; 
    cin>>r; 
    if(n>=1 && n<=10^5){ 
        if(n>=r && r>=l && l>=1){ 
    int arr[n]; 
    for(int i=0;i<n;i++){ 
        cin>>arr[i]; 
    } 
    for(int k=0;k<l-1;k++){ 
           cout<<arr[k]<<" "; 
       } 
   for(int j=r-1;j>=l-1;j--){ 
        cout<<arr[j]<<" "; 
    } 
    for(int c=r;c<n;c++){ 
           cout<<arr[c]<<" "; 
       } 
        } 
    } 
}