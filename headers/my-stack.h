#ifndef KIRI_STACK
#define KIRI_STACK
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
// Header file to declare my stack using a vector and its functions that will be used for this assignment.

class KiriStack {
private:
    vector<int> stack;

public:
    void push(int value);
    int pop();
    bool isEmpty();
    int top();
    int average();
};

#endif
