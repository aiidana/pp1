#include <iostream>

using namespace std;
void func(int n){
    int binary[100];
    int i=0;
    while(n>0){
        binary[i]=n%2;
        n/=2;
        i++;

    }
    for(int j=i-1; j>=0; j--){
        cout << binary[j];
    }
}
int main(){
    int n;
    cin >> n;
    func(n);
    return 0;
}