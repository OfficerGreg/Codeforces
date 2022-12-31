#include <iostream>
#include <algorithm>


using namespace std;

int main() {

   int  n, a;

   cin >> n;

   int coins[n];

   for(int i = 0; i < n; i++){
       cin >> a;
       coins[n] = a;

   }
   int size = sizeof(coins) / sizeof(int);
    sort(coins, coins + 3);



    return 0;
}
