#include <iostream>
using namespace std;

int main() {
int a,b,c;
string y="YES";
string n="NO";
cin>>a>>b>>c;
if(a==b&&b!=c) cout<<y;
else if(b==c&&b!=a) cout<<y;
else if(c==a&&a!=b) cout<<y;
else cout<<n;
return 0;
}