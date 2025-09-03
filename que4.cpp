#include <bits/stdc++.h>
using namespace std;

int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return -1;
}

string infixToPostfix(const string &exp) {
    stack<char> st;
    string result;

    for (int i = 0; i < exp.size(); i++) {
        char c = exp[i];

        // if operand → add to result
        if ((c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9')) {
            result += c;
        }
        // if '(' → push to stack
        else if (c == '(') {
            st.push(c);
        }
        // if ')' → pop until '('
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                result += st.top();
                st.pop();
            }
            if (!st.empty()) st.pop(); // remove '('
        }
        // operator
        else {
            while (!st.empty() && 
                   (precedence(c) < precedence(st.top()) ||
                   (precedence(c) == precedence(st.top()) && c != '^'))) {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // pop all remaining operators
    while (!st.empty()) {
        result += st.top();
        st.pop();
    }

    return result;
}

int main() {
    string exp;
    cout << "Enter the infix expression: ";
    cin >> exp;

    cout << "Postfix: " << infixToPostfix(exp) << endl;
    return 0;
}
