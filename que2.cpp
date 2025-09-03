#include <iostream>
using namespace std;
#define MAX 100
char stackArr[MAX];
int top = -1;

// push function
void push(char c) {
    if (top == MAX - 1) {
        cout << "Stack Overflow\n";
        return;
    }
    stackArr[++top] = c;
}

// pop function
char pop() {
    if (top == -1) {
        cout << "Stack Underflow\n";
        return '\0';
    }
    return stackArr[top--];
}

int main() {
    char str[100];
    cout << "Enter string: ";
    cin >> str;

    // Push all characters into stack
    for (int i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }

    // Pop characters to reverse
    int i = 0;
    while (top != -1) {
        str[i++] = pop();
    }

    str[i] = '\0';  // null terminate
    cout << "Reversed string: " << str << endl;

    return 0;
}
