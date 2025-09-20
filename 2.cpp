// Design the logic to remove the duplicate elements from an Array and after the
// deletion the array should contain the unique elements.
#include <iostream>
using namespace std;
char arr[100];
int n;
void remove_duplicate(){
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i]==arr[j]) {
                for (int k=j;k<n-1;k++) {
                    arr[k]=arr[k+1];
                }
                n--;
                j--; // soch it is gooodddd
            }
        }
    }
}
int main() {
    cout<<"enter n";
    cin>>n;
    for (int i=0;i<n;i++) {
        cout<<"Enter elements";
        cin>>arr[i];
    }
    remove_duplicate();
    for (int i=0;i<n;i++) {
        cout<<arr[i];
    }
}