#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;

    int c = 1;

    cin >> s;

    for(int i = 1; i <= s.length(); i++){
        if(s[i] == s[i - 1]){
          c++;
          if(c == 7){
            cout << "YES\n";
            return 0;
          } 
             
        }else
            c = 1;
    }
    cout << "NO\n";

    return 0;
}