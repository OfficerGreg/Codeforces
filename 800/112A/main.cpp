#include <iostream>

using namespace std;

int main() {
    string firstString, secondString;

    cin >> firstString >> secondString;

    //lowercase start from 97
    //uppercase end at 92

     for(int i = 0; i < firstString.size(); i++){
         //if the second string is uppercase, then we will convert it into lowercase
         if(firstString[i] < 92) {
            firstString[i] += 32;
         }
         //if the first string is uppercase, then we will convert it into lowercase
         if(secondString[i] < 92){
            secondString[i] += 32;
         }
     }

     if(firstString == secondString)
         cout << 0;
     if(firstString < secondString)
         cout << -1;
     if(firstString > secondString)
         cout << 1;

    return 0;
}

