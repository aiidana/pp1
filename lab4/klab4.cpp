#include <iostream>
using namespace std;
int main () {
int n,m;
int sum = 0;
cin >> n >> m;
int a[n][m];
for (int i=1;i<=n;i++) {
    for (int j=1;j<=m;j++) {
        cin >> a[i][j];
    }
}
for (int i=1;i<=n;i++) {
    for(int j=1;j<=m;j++) {
        sum += a[i][j];
    }
    cout << "The sum of row number" << " " << i << " is " << sum << endl;
    sum = 0;
}
for (int i=1;i<=m;i++) { 
    for (int j=1;j<=n;j++) {
        sum += a[j][i];
    }
    cout << "The sum of column number" << " " << i <<  " is "<< sum <<endl;
     sum = 0;
}

}
