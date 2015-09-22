//
//  HashTable.h
//  baseDataStructs
//
//  Created by Sam Kreter on 9/21/15.
//  Copyright (c) 2015 Sam Kreter. All rights reserved.
//

#ifndef __baseDataStructs__HashTable__
#define __baseDataStructs__HashTable__

#include <stdio.h>


class HashEntry{
    int key;
    int value;

};

class HashTable{
    int size;
    HashEntry **table;
};


#endif /* defined(__baseDataStructs__HashTable__) */
