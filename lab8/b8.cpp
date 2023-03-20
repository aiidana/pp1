#include <bits/stdc++.h>

using namespace std;
#include <vector>
int main()
{
    int n;
    cin >> n;
    vector <int> vec(n);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
        
    }
    reverse(vec.begin(),vec.end());
    for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
    
    
}
