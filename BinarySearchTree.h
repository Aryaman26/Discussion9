//
// Created by Aryaman Jadhav on 27-11-2023.
//

#ifndef DISCUSSION9_BINARYSEARCHTREE_H
#define DISCUSSION9_BINARYSEARCHTREE_H


#include <iostream>

class BinarySearchTree{
private:
    struct Node{
        int val;
        Node* left;
        Node* right;

        Node(int aVal, Node* left= nullptr, Node* right=nullptr);
    };
    Node* root;

    void insert(Node* &NodePtr, Node* &NewNodePtr);
    void deleteNode(int val, Node* &NodePtr);
    void makeDeletion(Node* &NodePtr);

public:
    BinarySearchTree();
    void insertNode(int aVal);
    bool searchNode(int aVal);
    void remove(int aVal);


};

#endif //DISCUSSION9_BINARYSEARCHTREE_H
