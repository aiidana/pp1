#include <bits/stdc++.h>

using namespace std;

void func(double a, double b, double c, double s){
    s=a*a+b*b;
    c= sqrt(s);
    cout << setprecision(4)<< c;
}
int main(){
    double a,b,c,s;
    cin >> a >> b;
    func(a,b,c,s);
}