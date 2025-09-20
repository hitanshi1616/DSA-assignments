#include <iostream>
using namespace std;
int main () {
    int m,n;
    cout<<"Enter rows and columns"<<endl;
    cin>>m>>n;
    int a[50][50];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout<<"Enter elements"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"Matrix is"<<endl;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += a[i][j];
        }
        cout << "Row " << i + 1 << " sum = " << rowSum << endl;
    }
    for (int j=0;j<n; j++) {
        int rowcol = 0;
        for (int i = 0; i < m; i++) {
            rowcol += a[i][j];
        }
        cout << "col " << j + 1 << " sum = " << rowcol << endl;
    }

}
