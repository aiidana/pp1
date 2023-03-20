#include <iostream>

using namespace std;


int main()
{
 int n, a;
    a = 1;
    cin >> n;
    for (int i = 1; a <= n; i++){
        cout << a << " ";
        a *=2;
        if (a > n){
            break;
        }
        
    }
    return 0;
}