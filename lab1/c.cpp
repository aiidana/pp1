#include <iostream>
using namespace std;
int main (){
    int n;
    cin >> n;
    int a,b,c,d;

    a = n % 2;
    cout << a  << endl;;
    n = n/2;

    b = n % 2;
    cout << b << endl;;
    n = n/2;

    c = n % 2;
    cout << c << endl;;
    n = n/2;

    d = n % 2;
    cout << d << endl;;
    n = n/2;

    cout << 8*a + 4*b + 2*c + 1*d;
    return 0; 
}