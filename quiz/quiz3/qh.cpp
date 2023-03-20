#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    int price, quality;
    vector<string> st(n);
    vector<double> vt(n);
    for (int i = 0; i < n; i++) {
        cin >> s >> price >> quality;
        st[i] = s;
        vt[i] = (double)price / quality;
    }
    double min = 9999999999;
    int c;
    for (int i = 0; i < n; i++) {
        if (vt[i] < min) {
            min = vt[i];
            c = i;
        }
    }
    cout << st[c];
}

