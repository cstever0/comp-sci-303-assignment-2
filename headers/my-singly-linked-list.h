#ifndef KIRI_SINGLE_LINK_H
#define KIRI_SINGLE_LINK_H
#include <iostream>

using namespace std;
// Header file to declare my Singly linked list and its functions that will be used for this assignment.


template<typename Item_Type>
class Singly_Linked_List {
private:
    struct Node
    {
        Item_Type data;
        Node* next;

        Node(const Item_Type& item_data, Node* next_node = nullptr);
    };

    Node* head;
    Node* tail;
    size_t num_items;

public:
    Singly_Linked_List();
    ~Singly_Linked_List();

    void push_front(const Item_Type& item);
    void push_back(const Item_Type& item);

    void pop_front();
    void pop_back();

    const Item_Type& front() const;
    const Item_Type& back() const;

    bool empty() const;

    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);

    size_t find(const Item_Type& item);
};

#endif
