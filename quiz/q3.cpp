#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int m,s,ms,ss;
    cin>>m>>s>>ms>>ss;
    if((m+s)>=(ms+ss)){
        if(m>=ms && s>=ss){
            cout<<"Yes";
        }
        else if(ss>s && m>=(abs(ss-s)+ms)){
            cout<<"Yes";
        }
        else if(ms>m){
            cout<<"No";
        }
        else{
            cout<<"No";
        }
    }
    else{
        cout<<"No";
    }

    return 0;
}