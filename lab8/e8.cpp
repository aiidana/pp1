#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    int l,r;
    cin >> l >> r;
    for(int i=l; i<=r; i++){
        vec.erase(vec.begin()+l);
    }
     for(int i=0; i<vec.size(); i++){
        cout << vec[i] << " ";
    }
}