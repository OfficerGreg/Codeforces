#include <bits/stdc++.h>

using namespace std;

int binarySearch(int arr[], int l, int r, int n){

    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == n)
            return mid;

        if (arr[mid] > n)
            return binarySearch(arr, l, mid - 1, n);

        return binarySearch(arr, mid + 1, r, n);
    }
    return -1;
}

int main(void){

    int arr[] = { 0,5,10,15,20,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
    int n ;
    cin >> n;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, size - 1, n);
    (result == -1)? cout << "Element is not present in array": cout << "Element is present at index " << result;

    return 0;
}
