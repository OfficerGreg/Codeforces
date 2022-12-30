#include <iostream>

using namespace std;

int main() {
    int a[] = {1,5,7,5,9,6,2,
               5,8,4,2,6,9,0,
               10,1,1,22,41};

    for(int i = 0; i < sizeof(a)/ sizeof(int); i++){
        for(int j = 0; j < sizeof(a) / sizeof(int) - 1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i : a)
        cout << i << " ";



    return 0;
}
