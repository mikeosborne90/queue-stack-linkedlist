#include"linkedlist.h"

#ifndef _Queue
#define _Queue

class Queue
{
    private:
        LinkedList* myList;
    public:
        Queue();
        void enQueue(int id);
        void deQueue();
        void displayQueue();
};

Queue::Queue()
{
    myList = new LinkedList();
}

void Queue::enQueue(int id)
{
    myList->addBack(id);
}

void Queue::deQueue()
{
    myList->removeFront();
}

void Queue::displayQueue()
{
    cout<<"Queue"<<endl;
    myList->displayList();
}

#endif