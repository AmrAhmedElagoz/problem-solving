#include "Stack.hpp"
#include <iostream>

Stack::Stack(): length(0), top(nullptr) {}

Stack::~Stack(){
    Node *current= top;
    while(current != nullptr){
        Node *next= current->next;
        delete current;
        current= next;
    }
}

void Stack::push(int data){
    Node *newNode= new Node(data);
    if (isEmpty()){
        newNode->next= nullptr;
        top= newNode;
        length++;
    } else {
        newNode->next= top;
        top= newNode;
        length++;
    }
}

void Stack::display(){
    Node* temp= top;
    while (temp != nullptr){
        std::cout << temp->data << " -> ";
        temp= temp->next;
    }
    std::cout << "nullptr" << std::endl;
}

int Stack::pop(){
    if (isEmpty()){
        std::cout << "The Stack is Empty!" << std::endl; 
        return -1;
    }
    Node *temp= top;
    int value= top->data;
    top= top->next;
    delete temp;
    length--;

    return value;
}

int Stack::peek() const {
    if (top == nullptr){
        std::cout << "The Stack is Empty!" << std::endl;
        return -1;
    }

    return top->data;
}

bool Stack::isFound(int data){
    bool found= false;
    Node* temp= top;

    while (temp != nullptr){
        if (temp->data == data){
            found= true;
            break;
        temp= temp->next;
        }
    }
    return found;
}