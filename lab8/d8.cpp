#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    vector <int>vec(n);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    cin >> k;
    
        vec.erase(vec.begin()+k);
        /*
            for(int i=l; i<=r; i++){
                vec.erase(vec.begin()+i);
            }
        */
    
       for(int i=0; i<vec.size(); i++){
       cout << vec[i]<< " ";
    }

}