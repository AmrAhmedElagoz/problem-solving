#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
#include <iostream>

class Node{
    public:
        int data{};
        Node *next{};

        Node(int data): data(data), next(nullptr){}
};

class LinkedList{
    private:
        int length{};
        Node* head{};
    public:
        LinkedList();
        ~LinkedList();

        bool isEmpty() { return (head == nullptr); }
        void Insert(int data);
        void Display();
        int getLength(){ return length; }
};

#endif