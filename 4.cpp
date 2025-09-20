#include <bits/stdc++.h>
using namespace std;
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}
bool checkoperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}
string convert(string infix) {
    stack<char> st;
    string postfix = "";

    for (auto c : infix) {
        if (isalnum(c)) {
            postfix += c;
        }
        else if (c == '(') {
            st.push(c);
        }
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else if (checkoperator(c)) {
            while (!st.empty() && precedence(st.top()) > precedence(c)) {
                if (c == '^' && st.top() == '^') break;
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    string infix;
    cout << "Enter infix expression ";
    cin >> infix;
    string postfix = convert(infix);
    cout << "Postfix Expression " << postfix << endl;

}
