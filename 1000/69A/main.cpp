#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, a, b ,c;
    int sum_x = 0, sum_y = 0, sum_z = 0;

    int x[n];
    int y[n];
    int z[n];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;

        x[i] = a;
        y[i] = b;
        z[i] = c;
        
        sum_x = sum_x + x[i];
        sum_y = sum_y + y[i];
        sum_z = sum_z + z[i];
    }


    if(sum_x == 0 && sum_y == 0 && sum_z == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
