#include <iostream>
using namespace std;
int main (){
    int n,i;
    cin >>n;
    int a[n];
    int count;
    int max=-9999999;
    for (i=0;i<n;i++){
    cin >> a[i];}
    for (i=0;i<n;i++){
        if (max<a[i]){
            max=a[i];
            count=i+1;
        }

    }
cout << count ;}