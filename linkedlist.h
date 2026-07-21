#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();
    void insert(int value);
    bool search(int value);
    void remove(int value);
    void display();
private:
    Node* head;
};

#endif
