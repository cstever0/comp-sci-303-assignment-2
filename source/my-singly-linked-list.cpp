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

// function for removing from the front of the list
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
            throw out_of_range("List is empty!")
        }

    } catch (out_of_range err) {
        cerr << err.what() << endl;
    }
}


// function for removing from the back of the list
template<typename Item_Type>
void Singly_Linked_List<Item_Type>::pop_back() {
    try {
        if (!empty()) {
            if (head == tail) {
                delete head;
                head = nullptr;
                tail = nullptr;
            } else {
                Node* temp = head;

                while (temp->next != tail) {
                    temp = temp->next;
                }

                delete tail;
                tail = temp;
                tail->next = nullptr;
            }

            --num_items
        } else {
            throw out_of_range("List is empty!")
        }
    } catch (out_of_range err) {
        cerr << err.what() << endl;
    }
}

// function for returning the value at the front of the list
template<typename Item_Type>
const Item_Type& Singly_Linked_List<Item_Type>::front() const{
    try {
        if (!empty()) {
            return head->data;
        } else {
            throw out_of_range("List is empty!")
        }
    } catch (out_of_range err) {
        cerr << err.what() << endl;
    }
}

// function for returning the value at the back of the list
template<typename Item_Type>
const Item_Type& Singly_Linked_List<Item_Type>::back() const {
    try {
        if (!empty()) {
            return tail->data;
        } else {
            throw out_of_range("List is empty!")
        }
    } catch (out_of_range err) {
        cerr << err.what() << endl;
    }
}

// function for returning true if the list is empty otherwise returns false
template<typename Item_Type>
bool Singly_Linked_List<Item_Type>::empty() const {
    if (num_items == 0) {
        return true;
    } else {
        return false;
    }
}

// function for inserting a value at a given index in the list
template<typename Item_Type>
void Singly_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item) {
    if (index == 0) {
        push_front(item);
    } else if (index >= num_items) {
        push_back(item);
    } else {
        Node* curr = head;
        for (size_t i = 1; i < index, ++i) {
            curr = curr->next;
        }
        curr->next = new Node(item, curr->next);
        ++num_items;
    }
}

// function for removing a value at a given index in the list
template<typename Item_Type>
bool Singly_Linked_List<Item_Type>::remove(size_t index) {
    if (index >= num_items) {
        return false;
    }

    if (index == 0) {
        pop_front();
        return true;
    } else if (index == num_items - 1) {
        pop_back();
        return true;
    } else {
        Node* curr = head;
        for (size_t i = 1; i < index; ++i) {
            curr = curr->next;
        }

        Node* remove = curr->next;
        curr->next = remove->next;

        delete remove;
        --num_items;
        return true;
    }
}
