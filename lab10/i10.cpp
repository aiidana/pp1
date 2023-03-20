#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>vt;
    vector<int>vt2;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        vt.push_back(x);
    }
    vt2 = vt;
    int c;
    bool flag=false;
    reverse(vt2.begin(),vt2.end());
    // for(int i=0; i<vt.size(); i++){
    //      if(vt[i]==vt2[i]){
    //        c=i+1;
    //        flag=true;
    //     }
       
    // }
    for(int i=0; i<vt.size(); i++){
     if(vt[i]!=vt2[i]){
    cout << "Instead of " << vt[i] << " here was " << vt2[i] << endl;
    }else if(vt[i]==vt2[i]){
        cout << "OK" << endl;
    }
    }
}