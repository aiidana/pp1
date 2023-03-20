#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    cout << 2 <<" is prime"<< endl;

    for (int j = 3; j < n; j+=2)
    {
        bool flag = true;
        if (j%2 == 0) continue;
        for (int a = 3; a*a <= j; a+=2)
        {
            if (j%a == 0)
            {
                flag = false;
                break;
            }
        }
        if (flag) cout << j <<" is prime"<< endl;
   }

}
