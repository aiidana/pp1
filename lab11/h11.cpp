#include<iostream>// Z 1 
using namespace std;
int main(){
   int x;
   cin >> x;
   string str;
   cin >> str;
   for(int i=0; i<str.size(); i++){
    str[i]=char((str[i]- 'A'+ x) % 26 + 65);
   }
   cout << str;
    return 0;
}