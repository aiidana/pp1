#include <bits/stdc++.h>

using namespace std;

int main(){
    //string s;
    //cin >> s;
    int n,m;
    cin >>n;
    int sum=0;

    while(n>0){
        m=(n%10)/2;
        sum+=m;

        n/=10;
    }

    //for(int i=0; i<s.size(); i++){
     //   a=s[i]/2;
       // sum += a-48;
    //}
    cout << sum;
}
