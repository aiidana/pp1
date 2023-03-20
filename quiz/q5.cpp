#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n;
    cin>>n;
    int s1,s2;
    float s;
    s=sqrt(n);
    s1=ceil(sqrt(n));
    s2=floor(sqrt(n));
    if(n/s==s1 || n/s==s2){
        cout<<"Perfecto";
    }
    else{
        cout<<"Simple";
    }

    return 0;
}