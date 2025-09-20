#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n ";
    cin >> n;
    int arr[n-1];
    cout<<"enter ele of arr : ";
    for (int i = 0; i < n-1; i++) cin >> arr[i];
    int left = 0, right = n-2, mid;
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == mid + 1)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout<<"our missing no. : " ;
    cout << left + 1;
    return 0;
}