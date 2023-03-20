#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, a;
    a = 0;
    cin >> n;
    for (int i = 1; a < n; i++){
        a = i * i;
        if (a > n){
            
            break;
        }
        cout << a << endl;
          }
}