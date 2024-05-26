#include "LinkedList.hpp"

LinkedList::LinkedList(): length(0), head(nullptr) {}

LinkedList::~LinkedList(){
    Node *current= head;
    while (current != nullptr){
        Node *next= current->next;
        delete current;
        current= next;
    }   
}

void LinkedList::Insert(int data){
    Node *newNode= new Node(data);
    if (isEmpty()){
        newNode->next= nullptr;
        head= newNode;
        length++;
    } else {
        newNode->next= head;
        head= newNode;
        length++;
    }
}

void LinkedList::Display(){
    Node *temp= head;
    while (temp != nullptr){
        std::cout << temp->data << " -> ";
        temp= temp->next;
    }
    std::cout << "nullptr" << std::endl;
    
}