#include <iostream>
using namespace std;
int main(){
    int n,n1,n2,n3,n4;
    cin>>n;
    n1=n/1000;
    n2=n/100%10;
    n3=n%100/10;
    n4=n%10;
    if(n1==n4 && n2==n3) cout<<"YES";
    else cout<<"NO";
}