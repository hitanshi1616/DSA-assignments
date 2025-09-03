#include <iostream>
using namespace std;

#define MAX 100
char stackArr[MAX];
int top = -1;

// push function
void push(char x) {
    if(top == MAX-1) {
        cout << "Stack Overflow\n";
    }
    else {
        top++;
        stackArr[top] = x;
    }
}

// pop function
char pop() {
    if(top == -1) {
        return '\0'; 
    }
    else {
        char temp = stackArr[top];
        top--;
        return temp;
    }
}

// function to check balanced parentheses
bool isBalanced(string exp) {
    for(int i=0; i<exp.length(); i++) {
        char ch = exp[i];
        if(ch=='(' || ch=='{' || ch=='[') {
            push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']') {
            char temp = pop();
            if((ch==')' && temp!='(') ||
               (ch=='}' && temp!='{') ||
               (ch==']' && temp!='[')) {
                return false;
            }
        }
    }
    if(top == -1) return true;
    return false;
}

int main() {
    string exp;
    cout << "Enter expression: ";
    cin >> exp;

    if(isBalanced(exp)) {
        cout << "Balanced Expression\n";
    }
    else {
        cout << "Not Balanced\n";
    }
    return 0;
}
