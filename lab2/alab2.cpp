#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
    cin >> n;
    if (n % 2 == 0 && n != 0)
    {
        cout << n << " "<< "Even";
    
    }
    else if (n == 0)
    {
        cout << n << "  "<< "None";
    }
    else {
        cout << n << " "<< "Odd";
    }
}
