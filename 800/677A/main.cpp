#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, h, width = 0;

	cin >> n >> h;

	int a;

	for(int i = 0; i < n; i++){
		cin >> a;
		
		if(h >= a){
			width++;
		}else{
			width+=2;
		}
	}

	cout << width;

	return 0;
}
