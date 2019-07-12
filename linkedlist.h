#include<iostream>
#include"node.h"
using namespace std;

#ifndef _LinkedList
#define _LinkedList

class LinkedList
{
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList();
        void addFront(int id);
        void addBack(int id);
        void removeFront();
        void removeBack();
        void displayList();
};

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
}

void LinkedList::addFront(int id)
{
    Node* aNode = new Node();

    aNode->setId(id);
    aNode->setNextPtr(head);

    if(head == nullptr) //case when first element is added.
    {
        tail = aNode;
    }

    head = aNode;
}

void LinkedList::addBack(int id)
{
    Node* aNode = new Node();

    aNode->setId(id);

    if(head != nullptr)
    {
       tail->setNextPtr(aNode);
    }
    else
    {
        head = aNode;
    }
    
    tail = aNode;
}

void LinkedList::removeFront()
{
    Node* tempNode = head;

    head = head->getNextPtr();
    delete tempNode;
}

void LinkedList::removeBack()
{
    Node* tempNode = head;
    Node* tempTail = tail;

    while(tempNode->getNextPtr() != nullptr) //how to loop and access node prior to tail
    {
        tempNode = tempNode->getNextPtr();
    }

    tail = tempNode;
    tail->setNextPtr(nullptr);

    delete tempTail;
}

void LinkedList::displayList()
{
    Node* tempNode = head;
    int count = 0;

    while(tempNode != nullptr)
    {
        cout<<count<<": ["<<tempNode->getId()<<"]"<<endl;
        tempNode = tempNode->getNextPtr();
        count++;
    }

    cout<<endl;
}

#endif
