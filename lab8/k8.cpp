#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>vt(n);
    for(int i=0;i<vt.size(); i++){
        cin >> vt[i]; 
    }
    int k;
    cin >>k;
    int sum=0;
    for(int j=0; j<k; j++){
        int mx=-999999,pos;
        for(int i=0; i<vt.size(); i++){
            if(mx<vt[i]){
                mx=vt[i];
                pos=i;
                
            }
        }
         sum+=mx;
        vt.erase(vt.begin()+pos);
    
    }
       cout << sum ;

}