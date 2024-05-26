#ifndef Q_H
#define Q_H

class Node{
    public:
        int data;
        Node *next;

        Node(int data): data(data), next(nullptr) {}
};


class Queue{
    private:
        Node* head;
        Node* tail;
        int length;

    public:
        Queue();
        ~Queue();

        void enqueue(int data);
        bool isEmpty(){ return head == nullptr; }
        int dequeue();
        void display();
        int peekHead() { return head->data; };
        int peekTail() { return tail->data; };
        int getLength() { return length; }
};





#endif