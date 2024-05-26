#ifndef BST_H
#define BST_H

class Node{
    public:
        int data;
        Node *left, *right;

        Node(int data): data(data), left(nullptr), right(nullptr) {}
};


class BST{
    private:
        Node *root;
        Node *insert(Node *node, int data);
        void destroy(Node *p);
        void preorder(Node *p) const;
        void inorder(Node *p) const;
        void postorder(Node *p) const;

    public:
        BST();
        ~BST();

        void insert(int data);
        void preorder() const;
        void inorder() const;
        void postorder() const;

};





#endif