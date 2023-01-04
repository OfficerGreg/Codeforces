#include <bits/stdc++.h>

using namespace std;

int main(){

	string s, g = "hello";
	cin >> s;

	int j = 0;

	for(int i = 0; i < s.length(); i++){
		if(s[i] == g[j]){
			j++;
		}
	}

	if(j == 5)
		cout << "YES\n";
	else
		cout << "NO\n";


	return 0;
}
