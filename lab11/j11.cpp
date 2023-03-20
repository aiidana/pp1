#include<bits/stdc++.h>
using namespace std;
float dist(int x1,int y1,int x2,int y2 ){
   return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}
int main(){
    int x,y;
     cin >> x >> y;
    int n;
    cin >> n;
   
    vector<pair<float,pair<int,int>>> vt(n);
    for(int i=0; i<n; i++) {
        int x2,y2;
        cin >> x2>> y2;
        vt[i].second.first=x2;
        vt[i].second.second=y2;
        vt[i].first=dist(x,y,x2,y2);

    } 
    sort(vt.begin(),vt.end());
    for(int i=0; i<vt.size(); i++){
        cout << vt[i].second.first << " " << vt[i].second.second << endl;
    }  
    return 0;
    

}