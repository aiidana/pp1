#include <iostream>
using namespace std;
int main(){
    int n,a,d,b;
    int sum=0;
    cin>>n>>a>>d;
    for(int i=0;i<n;i++) {
    	b=a+i*d;
      cout<<b<<' ';
      sum=sum+b;
    }
    cout<<endl;
    cout<<"sum: "<<sum;
}