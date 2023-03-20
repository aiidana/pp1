//recursive function fibonacci 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
#include <iostream>
using namespace std;

long fibonacci(long); 

int main() {

    int number;
    cin >> number;
   
    cout << fibonacci(number); 
     }


long fibonacci(long number){
    if((number == 0) || (number == 1)){
        return 0;
    }
        else if(number==2){
          return 1;
        }
    else   
        return fibonacci(number - 1) + fibonacci(number - 2);
}
