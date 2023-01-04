#include <bits/stdc++.h>

using namespace std;

int main(){


	string s, t;

	cin >> s >> t;

 	int n = t.length();

	for (int i = 0; i < n / 2; i++)
  	swap(t[i], t[n - i - 1]);

	if(s == t)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
