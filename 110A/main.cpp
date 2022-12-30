#include <iostream>

using namespace std;

int main() {

    long long n;
    cin >> n;

    int l = 0;

    while (n != 0) {
        if (n % 10 == 4 || n % 10 == 7) {
            l++;
        }

        n = n / 10;

    }
    if (l == 4 || l == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}