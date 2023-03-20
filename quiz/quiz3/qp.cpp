#include<bits/stdc++.h>
using namespace std;
void strToBool(string str){
    if(str=="1"){
        cout << "true";
        return;
    }
    if(str=="0"){
        cout << "false";
    }else{
        cout <<str;
    }
}
int main(){
 string str;
 cin >> str;
 strToBool(str);
 return 0;

}