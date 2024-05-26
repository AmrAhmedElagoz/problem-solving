#include "Queue.hpp"
#include <iostream>

Queue::Queue(): length(0), head(nullptr), tail(nullptr) {}

Queue::~Queue(){
    while(head != nullptr){
        Node *next= head;
        head= head->next;
        delete next;
    }
}

void Queue::enqueue(int data){
    Node *newNode= new Node(data);
    if (isEmpty()){
        newNode->next= nullptr; // it's already init to nullptr
        head= tail= newNode;
        length++;
    } else { // adding nodes from the tail always for queue
        tail->next= newNode;
        tail= newNode;
        length++;
    }
}

void Queue::display(){
    Node *temp= head;
    while (temp != nullptr){
        std::cout << temp->data << " -> ";
        temp= temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

int Queue::dequeue(){
    if (isEmpty()){
        std::cout << "The Queue is Empty!" << std::endl;
        return -1;
    }
    int value= head->data;
    Node *delptr= head;
    head= head->next;
    if (head == nullptr){
        tail= nullptr;
    }
    delete delptr;
    length--;
    return value;
}

