#ifndef _Node
#define _Node

class Node
{
    private:
        int id;
        Node* nextPtr;
    public:
        Node();
        void setId(int newId);
        int getId();
        void setNextPtr(Node* newNextPtr);
        Node* getNextPtr();
};

Node::Node()
{
    id = -1;
    nextPtr = nullptr;
}

void Node::setId(int newId)
{
    id = newId;
}

int Node::getId()
{
    return id;
}

void Node::setNextPtr(Node* newNextPtr)
{
    nextPtr = newNextPtr;
}

Node* Node::getNextPtr()
{
    return nextPtr;
}

#endif