#include <iostream>
using namespace std;

int main() {
double a,b;
int i=0;
cin>>a>>b;
while(a<b){
	a=a+a*0.10;
	i++;
}
cout<<i+1;
return 0;
}