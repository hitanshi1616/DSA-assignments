// Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping
// the adjacent elements if they are in wrong order. Code the Bubble sort with the
// following elements:
// 64
// 34
// 25
// 12
// 22
// 11
// 90

#include <iostream>
using namespace std;
int main () {
    int arr[]={64,34,25,15,22,11,90};
    int count = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<count;i++) {
        for (int j=0;j<count-i-1;j++) {
            if (arr[j]>arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    for (int i=0;i<count;i++) {
        cout<<arr[i]<<" ";
    }
}