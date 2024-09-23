#include <iostream>
#include <vector>
#include "../headers/my-stack.h"

using namespace std;

// Push an element onto the stack
void KiriStack::push(int value) {
    stack.push_back(value);
}

int KiriStack::pop() {
    if (isEmpty()) {
        cerr << "Stack is already Empty!" << endl;
        return -1;
    }

    int value_popped = top();
    stack.pop_back();
    return value_popped;
}

bool KiriStack::isEmpty() {
    return stack.empty();
}

int KiriStack::top() {
    if (isEmpty()) {
        cerr << "Stack is Empty!" << endl;
        return -1;
    }

    return stack.back();
}

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
