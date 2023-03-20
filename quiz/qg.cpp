#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum=0;
    int max=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(max!=a[i]){
            continue;
        }
    }
    cout<<sum<<' '<<max;
    return 0;
}