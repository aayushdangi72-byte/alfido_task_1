#include "LinkedList.h"
#include "Stack.h"
#include "Queue.h"
#include "BST.h"
#include <iostream>
using namespace std;

int main() {
    cout << "=== Linked List Demo ===\n";
    LinkedList list;
    list.insert(10); 
    list.insert(20);
    list.insert(30);
    list.display();
    cout << "Search 20: " << list.search(20) << endl;
    list.remove(20);
    list.display();

    cout << "\n=== Stack Demo ===\n";
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top: " << st.top() << endl;
    st.pop();
    cout << "Top after pop: " << st.top() << endl;

    cout << "\n=== Queue Demo ===\n";
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    cout << "Front: " << q.front() << endl;
    q.dequeue();
    cout << "Front after dequeue: " << q.front() << endl;

    cout << "\n=== BST Demo ===\n";
    BST tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(70);
    tree.inorder();
    cout << "Search 30: " << tree.search(30) << endl;

    return 0;
}
