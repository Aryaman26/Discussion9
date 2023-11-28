//
// Created by Aryaman Jadhav on 27-11-2023.
//
#include<iostream>
#include "BinarySearchTree.h"
using namespace std;

void BinarySearchTree::deleteNode(int val, BinarySearchTree::Node *&NodePtr) {
    if(val< NodePtr->val)
    {
        deleteNode(val, NodePtr->left);
    }
    else if(val>NodePtr->val)
    {
        deleteNode(val, NodePtr->right);
    }
    else
        makeDeletion(NodePtr);
}

void BinarySearchTree::insert(BinarySearchTree::Node *&NodePtr, BinarySearchTree::Node *&NewNodePtr) {
 if(NodePtr== nullptr) {
     NodePtr = NewNodePtr;
 }
 else if (NewNodePtr->val<NodePtr->val)
 {
     insert(NodePtr->left, NewNodePtr);
 }
 else {
     insert(NodePtr->right, NewNodePtr);
 }
}

void BinarySearchTree::makeDeletion(BinarySearchTree::Node *&NodePtr) {
    Node* temp= nullptr;

    if(NodePtr== nullptr)
    {
        std::cout<<"Cannot remove empty node"<<std::endl;
    }
    else if(NodePtr->right== nullptr)
    {
        temp=NodePtr;
        NodePtr=NodePtr->left;
        delete temp;
    }
    else if(NodePtr->left== nullptr)
    {
        temp=NodePtr;
        NodePtr=NodePtr->right;
        delete temp;
    }
    else
    {
        temp=NodePtr->right;
        while(temp->left){
            temp=temp->left;
        }
        temp->left=NodePtr->left;
        temp= NodePtr;
        NodePtr= temp->right;
        delete temp;
    }
}

BinarySearchTree::BinarySearchTree() {

}

void BinarySearchTree::insertNode(int aVal) {
    Node* newNode
}

bool BinarySearchTree::searchNode(int aVal) {
    Node* currentNode=root;

    while(currentNode)
    {
        if(aVal==currentNode->val)
        {
            return true;
        }
        else if(aVal<currentNode->val){
            currentNode=currentNode->left;
        }
        else
        {
            currentNode=currentNode->right;
        }
    }
    return false;
}

void BinarySearchTree::remove(int aVal) {
    deleteNode(aVal, root);
}
