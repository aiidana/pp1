#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
vector<int>vt; 
string s; 
char c; 
int a; 
cin >> s >> c; 
for (int i = 0; i < s.size(); i++) 
{ 
    if (s[i] == c) 
    { 
        a = i; 
        vt.push_back(a); 
    } 
     
} 
for (int i = 0; i < vt.size(); i++) 
{ 
    if (vt.size() == 1) 
    { 
        cout << vt[i]; 
    } 
    else{ 
    cout << vt[i] << " " << vt[vt.size() - 1]; 
    break ; 
    } 
} 
 
 
 
}
