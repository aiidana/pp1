#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> vec(n);
    for(int i=0; i<vec.size(); i++){
        cin >> vec[i];
    }
    int a,b,c;
    cin >> a >> b;
    int u[b-a];
    for(int i=a; i<=b;i++){
        u[i-a]=vec[i];
    }
    for(int i=a; i<=b;i++){
        vec[i]=u[b-i];
    }
    for(int i=0; i<vec.size(); i++){
        cout << vec[i]<<" ";
    }
    

    
        // c=vec[a];
        // vec[a]=vec[b];
        // vec[b]=c;
    
   

    return 0;
}