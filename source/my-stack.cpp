#include <iostream>
#include <vector>
#include "../headers/my-stack.h"

using namespace std;

// Push an element onto the stack
void KiriStack::push(int value) {
    stack.push_back(value);
}

// Pop an element from the top of the stack;
int KiriStack::pop() {
    if (isEmpty()) {
        cerr << "Stack is already Empty!" << endl;
        return -1;
    }

    int value_popped = top();
    stack.pop_back();
    return value_popped;
}

// Return true if stack is empty otherwise return false
bool KiriStack::isEmpty() {
    return stack.empty();
}

// returns the value at the top of the stack if there is one
int KiriStack::top() {
    if (isEmpty()) {
        cerr << "Stack is Empty!" << endl;
        return -1;
    }

    return stack.back();
}

// returns the average of all the values in the stack
int KiriStack::average() {
    if (isEmpty()) {
        cerr << "Stack is Empty!" << endl;
        return -1;
    }

    int sum = 0;
    for (size_t i = 0; i < stack.size(); ++i) {
        sum += stack[i];
    }

    return sum / stack.size();
}
