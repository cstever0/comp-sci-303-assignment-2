#include <iostream>
#include "../headers/my-singly-linked-list.h"
#include "../headers/my-stack.h"
#include "./my-singly-linked-list.cpp"
#include "./my-stack.cpp"

using namespace std;

int main() {
    Singly_Linked_List<int> example;

    cout << "QUESTION 1 \n" << endl;

    // pushing the values 1,2,3,4 to the list
    example.push_front(2);
    example.push_front(1);
    example.push_back(3);
    example.push_back(4);

    // printing the front and back of the list
    cout << "Front: " << example.front() << endl;
    cout << "Back: " << example.back() << endl;

    // demonstrating functionality of pop, insert and remove
    example.pop_front();
    cout << "After popping from the front - new front: " << example.front() << endl;

    example.pop_back();
    cout << "After popping from the back - new back: " << example.back() << endl;

    example.insert(1, 45);
    cout << "Inserting 45 at index 1" << endl;
    cout << "The value 45 was found at index: " << example.find(45) << endl;

    example.remove(1);
    cout << "Removing 45 from index 1" << endl;
    cout << "The value is no longer 45 and the new size of the list is: " << example.find(45) << endl;


    KiriStack exampleStack;

    cout << "\nQUESTION 2 \n" << endl;

    // demonstrating the functionality of isEmpty
    cout << "Checking if the stack is empty - " << (exampleStack.isEmpty() ? "It's empty" : "Not empty") << endl;

    // pushing the values 1,2,3,4,5,6 onto the stack
    exampleStack.push(1);
    exampleStack.push(2);
    exampleStack.push(3);
    exampleStack.push(4);
    exampleStack.push(5);
    exampleStack.push(6);

    // demonstrating the functionality of popping from the stack
    cout << "Popping from the top of the stack the value: " << exampleStack.pop() << endl;

    // demonstrating the functionality of top function
    cout << "The top of the stack is currently the value: " << exampleStack.top() << endl;

    // demonstrating the functionality of the average function
    cout << "The average of the entire stack is: " << exampleStack.average() << endl;

    return 0;
}
