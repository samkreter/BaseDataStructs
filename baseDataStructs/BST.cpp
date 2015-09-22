//
//  BST.cpp
//  baseDataStructs
//
//  Created by Sam Kreter on 9/9/15.
//  Copyright (c) 2015 Sam Kreter. All rights reserved.
//
#include<iostream>
#include "BST.h"

using namespace std;

BST::BST(){
    cout<<"BST initilized"<<endl;
}

BST::Node* BST::createNode(int data){
    Node* temp = new Node;
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

void BST::insertNode(Node* node, Node* root){
    if(root == NULL){
        root = node;
        return;
    }
    
    if(root->data > node->data){
        insertNode(node, root->left);
    }else{
        insertNode(node,root->right);
    }
}

BST::Node* BST::search(int data, Node* currNode){
    if(root == NULL){
        return NULL;
    }
    
    if(currNode->data == data){
        return currNode;
    }else if(currNode->data < data){
        return search(data,currNode->right);
    }else{
        return search(data,currNode->left);
    }
    
}


BST::Node* BST::addNode(int data){
    Node* temp = createNode(data);
    if(root == NULL){
        root = temp;
    }else{
        insertNode(temp,root);
    }
    
    return temp;
}


int BST::getHieght(Node* node){
    if(node == NULL){
        return -1;
    }
    
    int left = getHieght(node->left);
    int right = getHieght(node->right);
    
    if(left>right){
        return left + 1;
    }else{
        return right +1;
    }
}



