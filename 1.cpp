// Implement the Binary search algorithm regarded as a fast search algorithm with
// run-time complexity of Ο(log n) in comparison to the Linear Search.
#include <iostream>
using namespace std;
void binary_search(int arr[],int n, int value){
    int first = 0;
    int last = n-1;
    while (first<=last) {
        int mid = first + (last-first)/2;
        if (arr[mid]==value) {
            cout<<"Element found at "<<mid+1;
            break;
        }
        else if (arr[mid]<value) {
            first = mid +1;
        }
        else {
            last = mid -1;
        }
    }
}
int main () {
    int n;
    cout<<"Enter no of elements in array";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    binary_search(arr,n,6);
}