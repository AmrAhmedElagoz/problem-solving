#ifndef STACK_H
#define STACK_H

class Node{
    public:
        int data{};
        Node* next;

        Node(int data): data(data), next(nullptr){}
};


class Stack{
    private:
        Node *top;
        int length{};
        
    public:
        Stack();
        ~Stack();

        void push(int data);
        int pop();
        int peek() const;
        bool isEmpty() const { return (top == nullptr); }
        void display();
        bool isFound(int data);

};



#endif