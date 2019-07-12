#include"linkedlist.h"

#ifndef _Stack
#define _Stack

class Stack
{
    private:
        LinkedList* myList;
    public:
        Stack();
        void push(int id);
        void pop();
        void displayStack();
};

Stack::Stack()
{
    myList = new LinkedList();
}

void Stack::push(int id)
{
    myList->addFront(id);
}

void Stack::pop()
{
    myList->removeFront();
}

void Stack::displayStack()
{
    cout<<"Stack"<<endl;
    myList->displayList();
}

#endif