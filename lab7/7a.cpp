#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void func(int n){
    cout << setprecision(10)<< pow(2,n);

}
int main (){
    int n;
    cin >>n;
     func(n);
}