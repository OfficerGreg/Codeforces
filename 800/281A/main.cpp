#include <iostream>
#include <string>

int main() {

    std::string s;
    std::cin >> s;

    if(s[0] > 90){
        s[0] = s[0] - 32;
        std::cout << s;
    }else
        std::cout << s;
    return 0;
}