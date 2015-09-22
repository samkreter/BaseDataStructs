//
//  List.h
//  baseDataStructs
//
//  Created by Sam Kreter on 9/11/15.
//  Copyright (c) 2015 Sam Kreter. All rights reserved.
//

#ifndef __baseDataStructs__List__
#define __baseDataStructs__List__

#include <iostream>

#include "ListNode.h"



template<class T>
class List{

    Node<T> *root = NULL;
    
private:
    Node<T>* createNode(T key);
public:
    Node<T>* insertNode(T key);
    int deleteNode(int key, Node<T>* curr);
    Node<T>* searchList(int key, Node<T>* curr);
    void printList();

};


#endif /* defined(__baseDataStructs__List__) */
