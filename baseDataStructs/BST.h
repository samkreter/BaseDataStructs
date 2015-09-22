//
//  BST.h
//  baseDataStructs
//
//  Created by Sam Kreter on 9/9/15.
//  Copyright (c) 2015 Sam Kreter. All rights reserved.
//

#ifndef __baseDataStructs__BST__
#define __baseDataStructs__BST__

#include <stdio.h>

class BST {
    typedef struct _node{
        int data;
        struct _node *left;
        struct _node *right;
    }Node;
    
    //private to hold the root
    Node *root = NULL;
    
private:
    Node* createNode(int data);
    void insertNode(Node* node, Node* root);
public:
    BST();
    Node* addNode(int data);
    Node* deleteNode(int data);
    Node* search(int data, Node* currNode);
    int getHieght(Node* node);
    
    //traversals
    void inOrderTrav();
    void preOrderTrav();
    void postOrderTrav();
    
};


#endif /* defined(__baseDataStructs__BST__) */
