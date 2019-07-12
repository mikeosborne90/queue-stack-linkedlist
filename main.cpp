#include<iostream>
#include"stack.h"
#include"queue.h"
using namespace std;

int main()
{
    Stack* myStack = new Stack();
    Queue* myQueue = new Queue();

    myStack->push(3145);
    myStack->push(1221);
    myStack->push(9999);

    myStack->displayStack();

    myStack->pop();
    myStack->displayStack();
//-----------------------------------------------
    myQueue->enQueue(3145);
    myQueue->enQueue(1221);
    myQueue->enQueue(9999);

    myQueue->displayQueue();

    myQueue->deQueue();
    myQueue->displayQueue();

    return 0;
}