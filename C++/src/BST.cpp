#include "BST.hpp"
#include <iostream>

BST::BST(): root(nullptr) {}

void BST::destroy(Node *p){
    if (p != nullptr){
        destroy(p->left);
        destroy(p->right);
        delete p;
    }
}

BST::~BST(){
    destroy(root);
}

Node* BST::insert(Node *node, int data){
    // Node* newNode= new Node(data);
    if (node == nullptr){
        return new Node(data);
    }

    if (data < node->data){
        node->left= insert(node->left, data);
    } else {
        node->right= insert(node->right, data);
    }

    return node;
}

void BST::insert(int data){
    root= insert(root, data);
}

void BST::preorder(Node *node) const{
    // root > left > right
    if (node != nullptr){
        std::cout << node->data << " ";
        preorder(node->left);
        preorder(node->right);
    }
}

void BST::inorder(Node *node) const{
    // left > root > right
    if (node != nullptr){
        inorder(node->left);
        std::cout << node->data << " ";
        inorder(node->right);
    }
}

void BST::postorder(Node *node) const{
    // left > right > root 
    if (node != nullptr){
        postorder(node->left);
        postorder(node->right);
        std::cout << node->data << " ";
    }
}

void BST::preorder() const{
    preorder(root);
    std::cout << std::endl;
}

void BST::inorder() const{
    inorder(root);
    std::cout << std::endl;
}

void BST::postorder() const{
    postorder(root);
    std::cout << std::endl;
}