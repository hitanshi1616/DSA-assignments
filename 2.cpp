//  Given a string, reverse it using STACK. For example “DataStructure” should be output as
// “erutcurtSataD.”
#include <bits/stdc++.h>
using namespace std;

string reverse(string str) {
    stack<char> st;
    for (char c : str) {
        st.push(c);
    }
    string rev = "";
    while (!st.empty()) {
        rev += st.top();
        st.pop();
    }
    return rev;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed = reverse(str);
    cout << "Reversed string " << reversed;

}
