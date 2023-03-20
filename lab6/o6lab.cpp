#include <bits/stdc++.h>

using namespace std;

int main()
     {
    string s;
    cin >> s;
    int sum=0;
    
    for(int i=0;i<s.size();i++){
        sum+=s[i];
        sum=sum-48;    

    }
    int dec=stoi(s);
    dec=dec%10;
    if(sum%dec==0){
        cout << "Yes";
    }
    else{
        cout << "No";
    }



}
