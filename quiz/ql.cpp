#include <iostream>
using namespace std;
int main(){
    int n,sum;
    cin>>n;
    int i=0;
    while(sum<500000){
    	sum=sum+n*0.3;
    	n=n+n*0.10;
    	i++;
    }
    cout<<i;
}