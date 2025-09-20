#include <bits/stdc++.h>
using namespace std;
int evaluate(string str) {
    stack<int> st;
    for (auto ch : str) {
        if (isdigit(ch)) {
            st.push(ch - '0');
        }
        else {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();

            switch (ch) {
                case '+': st.push(a+b); break;
                case '-': st.push(a-b); break;
                case '*': st.push(a*b); break;
                case '/': st.push(a/b); break;
                case '^': st.push(pow(a,b)); break;
            }
        }
    }
    return st.top();
}

int main() {
    string str;
    cout << "Enter postfix expression ";
    cin >> str;
    cout << "Result " << evaluate(str);
    // 57 45 * 5 /
}
