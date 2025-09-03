#include <iostream>
using namespace std;

#define MAX 100
int stackArr[MAX];
int top = -1;

// push operation
void push(int x) {
    if(top == MAX-1) {
        cout << "Stack Overflow\n";
    }
    else {
        top++;
        stackArr[top] = x;
        cout << x << " pushed into stack\n";
    }
}

// pop operation
void pop() {
    if(top == -1) {
        cout << "Stack Underflow\n";
    }
    else {
        cout << stackArr[top] << " popped from stack\n";
        top--;
    }
}

// check empty
void isEmpty() {
    if(top == -1) {
        cout << "Stack is Empty\n";
    }
    else {
        cout << "Stack is not Empty\n";
    }
}

// check full
void isFull() {
    if(top == MAX-1) {
        cout << "Stack is Full\n";
    }
    else {
        cout << "Stack is not Full\n";
    }
}

// peek top element
void peek() {
    if(top == -1) {
        cout << "Stack is Empty\n";
    }
    else {
        cout << "Top element is: " << stackArr[top] << endl;
    }
}

// display all elements
void display() {
    if(top == -1) {
        cout << "Stack is Empty\n";
    }
    else {
        cout << "Stack elements are: ";
        for(int i=0;i<=top;i++) {
            cout << stackArr[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, val;
    while(true) {
        cout << "\n*** Stack Menu ***\n";
        cout << "1. Push\n2. Pop\n3. isEmpty\n4. isFull\n5. Display\n6. Peek\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Enter value to push: ";
                    cin >> val;
                    push(val);
                    break;
            case 2: 
            pop();
            break;
            case 3: 
            isEmpty(); 
            break;
            case 4: 
            isFull(); 
            break;
            case 5: 
            display(); 
            break;
            case 6: 
            peek(); 
            break;
            case 7: 
            return 0;
            default: cout << "Invalid Choice\n";
        }
    }
}
