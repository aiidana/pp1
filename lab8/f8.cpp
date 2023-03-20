#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>vec(n);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    int ind, x;
    cin >> ind >> x;
     vec.insert(vec.begin()+ind, x);
     for(int i=0; i<vec.size(); i++){
        cout << vec[i]<< " ";
     }

}
