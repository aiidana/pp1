#include <iostream>
using namespace std;
int main(){
  int a,b,c,a1,b1,c1,d;
  cin>>a>>b>>c>>a1>>b1>>c1>>d;
  if(a*a1+b*b1+c*c1<=d) cout<<"Yes";
  else cout<<"No";
    return 0;
}