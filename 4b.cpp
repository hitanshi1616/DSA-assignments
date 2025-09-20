// matrix multiplication
#include <iostream>
using namespace std;


int main() {
    int m,n,p,q;
    cout<<"Enter rows and columns of 1st matrix"<<endl;
    cin>>m>>n;
    cout<<"Enter rows and columns of 2nd matrix"<<endl;
    cin>>p>>q;
    if (n!=p) {
        cout<<"Matrix multiplicaion not possible as columns of 1st not equal to rows of 2nd"<<endl;
        return 0;
    }
    int a[50][50],b[50][50],c[50][50]={0};
    // 1st input
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            cout<<"Enter elements of 1st ";
            cin>>a[i][j];
        }
    }
    // 2nd input
    for (int i=0;i<p;i++) {
        for (int j=0;j<q;j++) {
            cout<<"Enter elements of 2nd ";
            cin>>b[i][j];
        }
    }
    for (int i=0;i<m;i++) {
        for (int j=0;j<q;j++) {
            for (int k=0;k<n;k++) {
                c[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    cout<< "resultant matrix is "<<endl;
    for (int i=0;i<m;i++) {
        for (int j=0;j<q;j++) {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }


}