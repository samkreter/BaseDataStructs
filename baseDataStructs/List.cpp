//
//  List.cpp
//  baseDataStructs
//
//  Created by Sam Kreter on 9/11/15.
//  Copyright (c) 2015 Sam Kreter. All rights reserved.
//

#include<iostream>

#include "List.h"

template<class T>
Node<T>* List<T>::createNode(T key){
    Node<T>* temp = new Node<T>;
    
    temp->data = key;
    temp->next = NULL;
    
    return temp;
    
}

template<class T>

void List<T>::printList(){
    if( root == NULL){
        return;
    }
    
    Node<T>* curr = root;
    
    while(curr != NULL){
        std::cout<<curr->data<<std::endl;
        curr = curr->next;
    }
}

template<class T>
Node<T>* List<T>::insertNode(T key){
    Node<T>* curr = createNode(key);
    
    if(root == NULL){
        root = curr;
        return curr;
    }
    
    Node<T>* temp = root->next;
    root->next = curr;
    curr->next = temp;
    
    return curr;
    
}
template<class T>
Node<T>* List<T>::searchList(int key, Node<T>* curr){
    if(curr == NULL){
        return NULL;
    }
    
    if(curr->key == key){
        return curr;
    }
    
    return searchList(key, curr->next);
}






