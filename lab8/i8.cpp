#include<iostream>
#include<vector>
using namespace std;
void func(int n, vector<int>vec,int k){
   
    
    for(int i=0; i<vec.size(); i++){
        if(vec[i]==k){
          cout<<"Yes";
           return;
        }
       
    }
    cout<<"no";    
}
int main(){
    int n;
    cin >> n;
    vector<int>vec(n);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    int k;
    cin >> k;
    func(n,vec,k);
    

}