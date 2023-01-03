#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, anton = 0, danik = 0;

    cin >> n;

    string s;

    cin >> s;


    for(int i = 0; i < n; i++){

        if(s[i] == 'A'){
            anton++;
        }
        if(s[i] == 'D'){
            danik++;
        }
    }
    if(anton > danik){
        cout << "Anton\n";
    }else if(anton < danik){
        cout << "Danik\n";
    }else
        cout << "Friendship\n";

    return 0;
}
