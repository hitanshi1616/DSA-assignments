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

    int C[20][3];

    cout << "Matrix A\nRow Col Val\n";
    for (int i=0;i<=A[0][2];i++)
        cout << A[i][0] << "   " << A[i][1] << "   " << A[i][2] << "\n";
    cout << endl;

    cout << "Matrix B\nRow Col Val\n";
    for (int i=0;i<=B[0][2];i++)
        cout << B[i][0] << "   " << B[i][1] << "   " << B[i][2] << "\n";
    cout << endl;
    if (A[0][0]!=B[0][0] || A[0][1]!=B[0][1]) {
        cout << "Addition not possible!\n";
    } else {
        int n1=A[0][2], n2=B[0][2];
        int i=1,j=1, k=1;
        C[0][0]=A[0][0]; C[0][1]=A[0][1];
        while (i<=n1 && j<=n2) {
            if (A[i][0]<B[j][0] || (A[i][0]==B[j][0] && A[i][1]<B[j][1])) {
                C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]; i++; k++;
            }
            else if (B[j][0]<A[i][0] || (A[i][0]==B[j][0] && B[j][1]<A[i][1])) {
                C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2]; j++; k++;
            }
            else {
                int sum=A[i][2]+B[j][2];
                if (sum!=0) { C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=sum; k++; }
                i++; j++;
            }
        }
        while (i<=n1) { C[k][0]=A[i][0]; C[k][1]=A[i][1]; C[k][2]=A[i][2]; i++; k++; }
        while (j<=n2) { C[k][0]=B[j][0]; C[k][1]=B[j][1]; C[k][2]=B[j][2]; j++; k++; }
        C[0][2]=k-1;

        cout << "A + B\nRow Col Val\n";
        for (int i=0;i<=C[0][2];i++)
            cout << C[i][0] << "   " << C[i][1] << "   " << C[i][2] << "\n";
        cout << endl;
    }

}
