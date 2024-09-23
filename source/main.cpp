#include <iostream>
#include "../headers/my-singly-linked-list.h"
#include "./my-singly-linked-list.cpp"

using namespace std;

int main() {
    Singly_Linked_List<int> example;

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

    return 0;
}
