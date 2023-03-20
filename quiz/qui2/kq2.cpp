#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[2][n];

  for (int i=0; i<n; i++)
  {
    cin >> a[0][i];
  }

  for (int i=0; i<n; i++)
  {
    cin >> a[1][i];
  }

  int k;
  int cnt=0;
  cin >> k;

  for (int i=0; i<n; i++)
  {
    if(a[0][i]<=k && a[1][i]>=k){
      cnt++;
    }
  }
  
  cout  << cnt;
}