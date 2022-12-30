#include <iostream>

using namespace std;

int main() {

    int n, s;
    cin >> n >> s;

    for(int i = 0; i < s; i++){
        if(n % 10 == 0)
            n = n / 10;
        else
            n = n -1;
    }
    cout << n;

    return 0;
}
