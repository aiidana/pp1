
 #include <iostream>
using namespace std;

int main() {
int n,max0=0,ind=0,max1= -2147483647;

cin >> n;

int *a = new int[n]; 

for (int i = 0; i < n; i++)

 if ((cin >> a[i], a[i]) > max0 || i == 0) {  
  max0 = a[i];
  ind = i;
 }

for (int i = 0; i < n; i++)
 if (i != ind && a[i] > max1) max1 = a[i];  
cout << max0 * max1;
delete[] a;

   return 0;

}