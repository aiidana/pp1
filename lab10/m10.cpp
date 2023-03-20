#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
	cin>>n>>m;
	vector<int> vt1;
	vector<int> vt2;
	int k;
	for(int i = 0;i<n;i++){
		cin>>k;
		vt1.push_back(k);
	}

	for(int i = 0;i<m;i++){
		cin>>k;
		vt2.push_back(k);
	}
	vector<int>:: iterator it1;
	vector<int>:: iterator it2;
	it1 = unique(vt1.begin(),vt1.end());
	it2 = unique(vt2.begin(),vt2.end());
	vt1.resize(distance(vt1.begin(),it1));
	vt2.resize(distance(vt2.begin(),it2));
	vector<int> v(vt1.size() + vt2.size());
	for(int i = 0;i<v.size();i+=2){
		v[i] = vt1[i/2];
	}
	for(int i = 1;i<v.size();i+=2){
		v[i] = vt2[i/2];
	}
	vector<int>:: iterator it;
	it = unique(v.begin(),v.end());
	v.resize(distance(v.begin(),it));
	for(int i = 0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	return 0;
}