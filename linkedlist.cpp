#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    while (head) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::insert(int value) {
    Node* newNode = new Node{value, head};
    head = newNode;
}

bool LinkedList::search(int value) {
    Node* temp = head;
    while (temp) {
        if (temp->data == value) return true;
        temp = temp->next;
    }
    return false;
}

void LinkedList::remove(int value) {
    Node* temp = head;
    Node* prev = nullptr;
    while (temp) {
        if (temp->data == value) {
            if (prev) prev->next = temp->next;
            else head = temp->next;
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}

void LinkedList::display() {
    Node* temp = head;
    while (temp) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
