#include <iostream>
using namespace std;
int main ()
{
    int n, i, max;
    cin >> n;
    int a[n];
    max = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     for (i = 0; i < n; i++){
        if ( max < a[i])
        {
            max = a[i];
        }
     }
     cout << max;
     return 0;

}