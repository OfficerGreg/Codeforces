#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int n, last_odd = 0, last_even = 0, c_even = 0;
	cin >> n;
	int e;

	for(int i = 1; i <= n; i++){
		cin >> e;

		if(e%2==0){
			c_even++;
			last_even = i;
		}else{
			c_even--;
			last_odd = i;
		}
	}
	cout << (c_even > 0 ? last_odd : last_even) << endl;

	return 0;
}
