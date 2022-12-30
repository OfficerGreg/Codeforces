#include <iostream>

using namespace std;

int main() {
    int a, b, year = 0;

    cin >> a >> b;
    if(a <= b) {
        for (year; a < b; year++) {
            a = a * 3;
            b = b * 2;
        }
        if(a == b){
            a = a * 3;
            b = b * 2;
            year++;
        }


        cout << year;

    }else
        return 0;


    return 0;
}
