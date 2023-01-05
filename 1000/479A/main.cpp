#include <bits/stdc++.h>

using namespace std;

int main(){

	int a, b, c, max_s = 0;
	cin >> a >> b >> c;

	max_s = a + b + c;

	max_s = max(max_s, (a*b*c));
	max_s = max(max_s, ((a+b)*c));
	max_s = max(max_s, a*(b+c));
	max_s = max(max_s, a+(b*c));
	max_s = max(max_s, (a*b)+c);


	cout << max_s << endl;


	return 0;
}
