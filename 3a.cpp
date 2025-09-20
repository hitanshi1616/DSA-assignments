// Design the Logic to Find a Missing Number in a Sorted Array. Given an array of n-1
// distinct integers in the range of 1 to n, find the missing number in it in a Sorted Array
// (a) Linear time
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no of elements";
    cin >> n;
    cout << "Enter the elements in array";
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int exp_diff = arr[0] - 1;
    for (int i = 0; i < n; i++) {
        int cur_diff = arr[i] - (i + 1);
        if (cur_diff != exp_diff) {
            cout << "Missing number is " << i + 1 << endl;
            break;
        }
    }
}
