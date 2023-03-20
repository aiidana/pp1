#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    getline(cin,st);
    int n;
    cin >> n;
    char a[n];
    int b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a,a+n);
   for(int i=0; i<n; i++){
    b[i]=0;
   }
   for(int i=0; i<n; i++){
    for(int j=0; j<st.size(); j++){
        if(a[i]==st[j]){
            b[i]+=1;
        }
    }
   }
   for(int i=0; i<n; i++){
    cout << a[i]<< " - "<< b[i]<< endl;
   }
}