#include <iostream>
using namespace std;
int main(){
    int n,stop;
    cin>>n;
    int i=0;
    while(n>0){
    	if(i%7==0) {n=n+0;}
    	else if(i%2==0){ stop++; n=n-4;}
    	else if(i%2==1){ stop++; n=n+3;}
    	i++;
    }
    cout<<i;
}