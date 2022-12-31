#include <iostream>
#include <cmath>
#include <algorithm>


using namespace std;

int main() {
    unsigned long long n, m, a;

    cin >> n >> m >> a;

    unsigned  long long tiles =  ceil((double)m/a) * ceil((double)n/a);

    cout << tiles;

    return 0;
}
