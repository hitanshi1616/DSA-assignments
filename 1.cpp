// Develop a menu driven program demonstrating the following operations on a Stack using array:
// (i) push(),  (ii) pop(),  (iii) isEmpty(),  (iv) isFull(),  (v) display(), and  (vi) peek().
#include <bits/stdc++.h>
using namespace std;
int max_ = 5;
bool isEmpty_(stack<int>& st) {
    return st.empty();
}
bool isFull_(stack<int>& st) {
    return st.size()==max_;
}
void push_(stack <int>& st) {
    if (isFull_(st)) {
        cout << "Stack is full";
        return;
    }
    cout<<"Enter element to push";
    int n;
    cin>>n;
    st.push(n);

}
void pop_(stack <int>& st) {
    if (isEmpty_(st)) {
        cout<<"Stack is empty";
        return;
    }
    cout<<"Poping the element in stack";
    st.pop();
}
void peek_(stack <int> & st) {
    if (isEmpty_(st)) {
        cout<<"Stack is empty";
        return;
    }
    cout << "Top element is " << st.top();
}
void display(stack<int> st) {
    if (st.empty()) {
        cout << "Stack is empty\n";
    } else {
        cout << "Stacked elements are ";
        while (!st.empty()) {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }
}
int main() {
    stack<int> st;
    int choice;

    do {
        cout << "Stack Menu\n";
        cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Check Empty\n6. Check Full\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: push_(st); break;
            case 2: pop_(st); break;
            case 3: peek_(st); break;
            case 4: display(st); break;
            case 5: cout << (isEmpty_(st) ? "Stack is empty" : "Stack is not empty"); break;
            case 6: cout << (isFull_(st) ? "Stack is full" : "Stack is not full"); break;
            case 7: cout<<"Exiting";
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 7);

}