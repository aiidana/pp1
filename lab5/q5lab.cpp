#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string s , t;
    cin >> s >> t;
    bool boolka = true;
    int cnt = 0;
    // cout << t.size() << " " << s.size();
    if(t.size()%s.size() !=0){
        cout << "NO";
        return 0;
    }
    int koef = t.size()/s.size();
    for(int j =0 ; j < koef; j++){
        for(int i = 0; i < s.size() ;i++){
            if(s[i] != t[i + j *(s.size())]){
                // cout << i +j*(s.size()-1) << " ok " << i << endl;
                boolka = false;
            }
            // cout <<i + j *(s.size())<< " ok " << i << endl;
        }
    }
    if(boolka){
        cout << "YES";
    }else cout << "NO";
    return 0;
} 