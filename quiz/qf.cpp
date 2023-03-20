#include <iostream>
using namespace std;
int main(){
    int r1,r2,l1,l2,p1,p2;
    cin>>r1>>r2>>l1>>l2>>p1>>p2;
    if(p1>=r1 && p1<=l1 && p2<=r2 && p2>=l2){
        // 0 100 100 0 
        //50 50
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
    return 0;
}