#include <iostream>
using namespace std;

int main(){
    string c = "hgnis reevnas";
    int a = c.length();

    for (int i = 0 ; i < a/2 ; i++){
        int j = a - i - 1;
        swap(c[i], c[j]);
    }

    cout << c;
}
