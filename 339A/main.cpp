#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s, sum;
	
	cin >> s;
	
	for(int i = 0; i < s.size(); i++){
		if(s[i] != '+'){
			sum.push_back(s[i]);
			
		}
	}
	sort(sum.begin(), sum.end());
	cout << sum[0]
	for(int i : sum){
		cout << "+" << i;
	}


    return 0;
}
