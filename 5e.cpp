#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter size of matrix";
    cin >> n;
    vector<int> A(3*n-2, 0);

    cout << "Enter elements for Tridiagonal Matrix\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(abs(i-j)<=1) {
                int x; cin >> x;
                if(i-j==1) A[i-1] = x;
                else if(i-j==0) A[n-1+i] = x;
                else A[2*n-1+i] = x;
            }
        }
    }

    cout << "Tridiagonal Matrix\n";
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(i-j==1) cout << A[i-1] << " ";
            else if(i-j==0) cout << A[n-1+i] << " ";
            else if(i-j==-1) cout << A[2*n-1+i] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }

}
