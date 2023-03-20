#include <iostream>
#include<set>
using namespace std;

int main()
{
    int n,cnt=0;
    cin>>n;
    set<int> st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    // set<int> ::iterator it=st.begin();
    // for(it;it!=st.end();it++){
    //     cnt++;
    // }
    cout<<st.size();
}
