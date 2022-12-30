#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {

    string s, bog;
    cin >> s;

    for(int i = 0; i < s.length(); i++) {
        if (count(bog.begin(), bog.end(), s[i]))
            continue;
        else
            bog.push_back(s[i]);
    }

    if(bog.length()%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}
