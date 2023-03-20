#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int sum=0,sum2=0, cnt=0, cnt2=0;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
          sum+=a[i];
          cnt++;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]%2==1){
            sum2+=a[i];
            cnt2++;
        }
    }
    cout <<"Left hand magic power: " << sum*cnt<< endl;
    cout <<"Right hand magic power: "<< sum2*cnt2 << endl;
}