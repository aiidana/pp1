#include<bits/stdc++.h>
using namespace std;

bool roma(vector<int> bugaga)
{
    vector <int> kuku;
    kuku = bugaga;
    reverse(kuku.begin(), kuku.end());
    for(int i=0;i<bugaga.size();i++)
    {
        if(kuku[i] !=bugaga[i]) return false;
    }
    return true;
}

void haha(vector <int> jojo)
{
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] <<" ";
    }
}



int main(){
    int n;
    cin >> n;
    vector<int> jojo(n);
    for(int i=0;i<n;i++)
    {
        cin >> jojo[i];
    }
    // next_permut
    sort(jojo.begin(), jojo.end());

    do {
        if(roma(jojo))
        {
            haha(jojo);
            return 0;
        }
    }
    while(next_permutation(jojo.begin(), jojo.end()));

    cout << "Impossible";
    return 0;

}