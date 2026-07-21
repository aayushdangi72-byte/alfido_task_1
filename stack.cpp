#include "Stack.h"
#include <iostream>
using namespace std;

void Stack::push(int value) {
     data.push_back(value);
     }

void Stack::pop() {
     if (!data.empty()) data.pop_back();
     }

int Stack::top() {
     return data.empty() ? -1 : data.back(); 
    }
    
bool Stack::isEmpty() {
     return data.empty(); 
    }
