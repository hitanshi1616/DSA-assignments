#include <iostream>
using namespace std;

int main() {
    int A[10][3] = {
        {3,3,4},
        {0,0,5},
        {0,2,8},
        {1,1,3},
        {2,2,6}
    };

    int B[10][3] = {
        {3,3,3},
        {0,0,2},
        {1,1,4},
        {2,0,7}
    };

    int T[10][3];

    cout << "Matrix A\nRow Col Val\n";
    for (int i=0;i<=A[0][2];i++)
        cout << A[i][0] << "   " << A[i][1] << "   " << A[i][2] << "\n";
    cout << endl;

    cout << "Matrix B\nRow Col Val\n";
    for (int i=0;i<=B[0][2];i++)
        cout << B[i][0] << "   " << B[i][1] << "   " << B[i][2] << "\n";
    cout << endl;

    int n=A[0][2], k=1;
    T[0][0]=A[0][1]; T[0][1]=A[0][0]; T[0][2]=n;
    for (int i=0;i<A[0][1];i++) {
        for (int j=1;j<=n;j++) {
            if (A[j][1]==i) {
                T[k][0]=A[j][1];
                T[k][1]=A[j][0];
                T[k][2]=A[j][2];
                k++;
            }
        }
    }
    cout << "Transpose of A\nRow Col Val\n";
    for (int i=0;i<=T[0][2];i++)
        cout << T[i][0] << "   " << T[i][1] << "   " << T[i][2] << "\n";
    cout << endl;
}