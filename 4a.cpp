// Reverse the elements of an array
#include <iostream>
using namespace std;
int n;
char arr[100];
void reverse() {
    for (int i=0;i<n/2;i++) {
        int temp;
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;

    }
    for (int i=0;i<n;i++) {
        cout<<arr[i];
    }

}
int main() {
    cout<<"enter no of elements";
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<"Enter elements";
        cin>>arr[i];
    }
    for (int i=0;i<n;i++) {
        cout<<arr[i];
    }
    cout<<endl;
    reverse();
}