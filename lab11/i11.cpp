#include <bits/stdc++.h>
using namespace std;
bool ispal(string s) {
	string t = s;
	reverse(s.begin(), s.end());
	return t==s;
}//jojo jjoo
int main() {
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	do {
		if (ispal(s)) {
			cout << "ZA WARUDO TOKI WO TOMARE" ;
			return 0;
		}
	} while(next_permutation(s.begin(), s.end()));
	cout << "JOJO";
	return 0;
}