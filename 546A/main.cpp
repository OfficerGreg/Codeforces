#include <iostream>

using namespace std;

int main() {
    //k = price of first banana
    //n = money
    //w = num of bananas
    int k, n, w, sum = 0, borrow;

    cin >> k >> n >> w;

    for(int i = 1; i <= w; i++ ){
        sum += k * i;
    }

    if(sum <= n)
        cout << 0 << endl;
    else{
        borrow = sum - n;
        cout << borrow;

    }


    return 0;
}
