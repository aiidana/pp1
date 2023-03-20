#include<bits/stdc++.h>
using namespace std;
int main(){

int num,res,cnt = 0;
cin >> num;
vector<int>v(num);
for (int i = 0; i < num; i++)
{
    cin >> v[i];
}
for (int i = 0; i < num; i++)
{
    
    for (int j = i + 1; j < num; j++)
    {
        res = ( v[i] ^ v[j] );
        
        for (int k = 0; k < num; k++)
        {
            if (v[k] == res)
            {
                cnt++;
                break;
            }
            
        }
        

    }
    
}


cout << cnt;



}