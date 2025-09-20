#include <bits/stdc++.h>
using namespace std;
bool isbalanced(string str) {
    stack<char> st;
    for (auto ch : str) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty()) return false;
            char top = st.top();
            st.pop();
            if ((ch == ')' && top != '(') || (ch == '}' && top != '{') || (ch == ']' && top != '[')) {
                return false;
                }
        }
    }

    return st.empty();
}

int main() {
    string str;
    cout << "Enter expression: ";
    cin >> str;

    if (isbalanced(str))
        cout << "Expression is balanced";
    else
        cout << "Expression is not balanced";

}
