#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int min;
    for(int i=x;i>=2;i--){
        if(x%i==0){
            min=i;
        }
    }
    cout<<min;
    return 0;
}