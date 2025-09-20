#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter size of matrix";
    cin >> n;
    vector<int> A(n*(n+1)/2, 0);

    cout << "Enter elements for Upper Triangular Matrix\n";
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            cin >> A[j*(j+1)/2 + i];
        }
    }

    cout << "Upper Triangular Matrix\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i<=j) cout << A[j*(j+1)/2 + i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }
}
