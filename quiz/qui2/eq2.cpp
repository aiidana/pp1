#include <bits/stdc++.h>

using namespace std;
int main(){
    string s;
    int sum=0;
    getline(cin,s);

    for(int i=1; i<s.size(); i++){
        sum=sum+ (int)s[i] -'0';
    }
    sum =sum%10;
    if(sum==(s[0]-'0')){
        cout << "YES"<< endl;
    }else cout << "NO"<< endl;
}