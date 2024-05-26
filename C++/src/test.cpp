#include "BST.hpp"
#include <iostream>

int main(){
    BST btree;
    btree.insert(45);
    btree.insert(15);
    btree.insert(79);
    btree.insert(90);
    btree.insert(10);
    btree.insert(55);
    btree.insert(12);
    btree.insert(20);
    btree.insert(50);

    btree.preorder();
    btree.inorder();
    btree.postorder();
    
}
