#include <iostream>

using namespace std;

int main()
{
    int n, a = 0;
    cout << "n = ";
    cin >> n;
    int mas[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }    
    for(int i = 0; i < n; i++){
        if (mas[i] == 7 || mas[i] % 10 == 7 || mas[i] % 100 == 7 || mas[i] % 1000 == 7){
            a++;
        }
    }
    cout << "\n" << a;
    return 0;
}