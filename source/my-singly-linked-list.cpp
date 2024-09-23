#include <iostream>
#include "../headers/my-singly-linked-list.h"

using namespace std;

// this is the constructor for my Node
template<typename Item_Type>
Singly_Linked_List<Item_Type>::Node::Node(const Item_Type& item_data, Node* next_node) : data(item_data), next(next_node) {}

// this is my class constructor
template<typename Item_Type>
Singly_Linked_List<Item_Type>::Singly_Linked_List() : head(nullptr), tail(nullptr), num_items = 0 {}

// this is my class destructor
template<typename Item_Type>
Singly_Linked_List<Item_Type>::~Singly_Linked_List() {
    while (!empty()) {
        pop_front();
    }
}

// function for adding to the front of the list
template<typename Item_Type>
void Singly_Linked_List<Item_Type>::push_front(const Item_Type& item) {
    Node* new_node = new Node(item, head);
    head = new_node;

    if (tail == nullptr) {
        tail = new_node;
    }

    ++num_items
}

// function for adding to the back of the list
template<typename Item_Type>
void Singly_Linked_List<Item_Type>::push_back(const Item_Type& item) {
    Node* new_node = new Node(item);

    if (head == nullptr)
        head = new_node;

    if (tail)
        tail->next = new_node;

    tail = new_node;
    ++num_items
}

// function for adding to the back of the list
template<typename Item_Type>
void Singly_Linked_List<Item_Type>::pop_front() {
    try {
        if (!empty()) {
            Node* prev_head = head;
            head = head->next;

            delete prev_head;
            --num_items;

            if (head == nullptr)
                tail = nullptr;
        }
        else {
            throw range_error("List is empty!")
        }

    } catch (range_error err) {
        cerr << err.what() << endl;
    }
}
