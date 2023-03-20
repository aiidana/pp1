#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    cin >> n;
    int sum =0, sum2 = 0;
    

    for(int i =0; i<n.size(); i++){
       
        if(i%2==0){
            sum += n[i] - '0';
        } else{
            sum2 += n[i] - '0';
        }
        
    }
    if(sum==sum2){
        cout << "YES";
    }else{
        cout << "NO";
    }
}