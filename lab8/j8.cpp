#include<iostream>
#include<vector>
using namespace std;

void func(int n, vector<int>vec){
   int mn=9999999;
   int mx=-9999999;
   for(int i=0; i<vec.size(); i++){
    if(mx<vec[i]){
        mx=vec[i];
    }
    if(mn>vec[i]){
        mn=vec[i];
    }
   }
   cout << mx-mn;
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    func(n,vec);
}