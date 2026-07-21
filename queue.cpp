#include "Queue.h"
using namespace std;

void Queue::enqueue(int value) {
     q.push(value);
     }

void Queue::dequeue() {
     if (!q.empty()) 
     q.pop();
     }

int Queue::front() { 
    if(q.empty()){
        return -1;
    } 
    else{
        return q.front();
    }
 }

bool Queue::isEmpty() {
     return q.empty(); 
    }
