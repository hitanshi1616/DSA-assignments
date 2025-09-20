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

    int M[20][3];

    cout << "Matrix A\nRow Col Val\n";
    for (int i=0;i<=A[0][2];i++)
        cout << A[i][0] << "   " << A[i][1] << "   " << A[i][2] << "\n";
    cout << endl;

    cout << "Matrix B\nRow Col Val\n";
    for (int i=0;i<=B[0][2];i++)
        cout << B[i][0] << "   " << B[i][1] << "   " << B[i][2] << "\n";
    cout << endl;

    if (A[0][1]!=B[0][0]) {
        cout << "Multiplication not possible!\n";
    } else {
        int k=1;
        M[0][0]=A[0][0]; M[0][1]=B[0][1];
        for (int i=1;i<=A[0][2];i++) {
            for (int j=1;j<=B[0][2];j++) {
                if (A[i][1]==B[j][0]) {
                    int r=A[i][0], col=B[j][1], val=A[i][2]*B[j][2];
                    int found=0;
                    for (int x=1;x<k;x++) {
                        if (M[x][0]==r && M[x][1]==col) {
                            M[x][2]+=val; found=1; break;
                        }
                    }
                    if (!found) {
                        M[k][0]=r; M[k][1]=col; M[k][2]=val; k++;
                    }
                }
            }
        }
        M[0][2]=k-1;

        cout << "A * B\nRow Col Val\n";
        for (int i=0;i<=M[0][2];i++)
            cout << M[i][0] << "   " << M[i][1] << "   " << M[i][2] << "\n";
    }

}