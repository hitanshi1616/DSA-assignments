// Transpose of matrix
#include <iostream>
using namespace std;
int main () {
    int m,n;
    cout<<"Enter rows and columns"<<endl;
    cin>>m>>n;
    int a[50][50],b[50][50];
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout<< "Enter elements"<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"Entered matrix is"<<endl;
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            b[j][i]=a[i][j];
        }
    }
    cout<<"transpose is"<<endl;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cout<< b[i][j];
        }
        cout<<endl;
    }

}