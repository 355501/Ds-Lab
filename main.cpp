#include <iostream>
using namespace std;

const int size = 100;
int A[size];
int top = -1;

bool isEmpty() {
    return top == -1;
}

void push(int value) {
    if (top == size - 1) {
        cout << "Stack is full" << endl;
    } else {
        top++;
        A[top] = value;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        top--;
    }
}

void showTop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Element at the top is: " << A[top] << endl;
    }
}

void displayStack() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
    } else {
        for (int i = 0; i <= top; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    push(1);
    push(2);
    push(3);

    displayStack();

    showTop();

    pop();
    displayStack();

    return 0;
}
