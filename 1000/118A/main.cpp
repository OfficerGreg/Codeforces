#include <bits/stdc++.h>

using namespace std;

int main() {

    string s, f;

    cin >> s;

    for(int i = 0; i < s.length(); i++){
        if(s[i] < 92)
            s[i] += 32;

        if(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'i' || s[i] == 'u' || s[i] == 'e'){
        }else
            f.push_back(s[i]);
    }

    for(int i = 0; i < f.length(); i++)
        cout << "." << f[i];

    return 0;
}
