#ifndef QUEUE_H
#define QUEUE_H
#include <queue>

class Queue {
public:
    void enqueue(int value);
    void dequeue();
    int front();
    bool isEmpty();
private:
    std::queue<int> q;
};

#endif
