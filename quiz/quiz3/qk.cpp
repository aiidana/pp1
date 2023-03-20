#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sum=0;
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++){
        int m;
        m=pow(2,i)*(s[i]-48);
        sum+=m;
    }
    cout << sum;
}