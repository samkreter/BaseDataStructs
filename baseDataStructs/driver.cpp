//
//  driver.cpp
//  baseDataStructs
//
//  Created by Sam Kreter on 9/21/15.
//  Copyright (c) 2015 Sam Kreter. All rights reserved.
//

#include <iostream>
#include "List.h"
#include "List.cpp"


int main(){
    
    List<int> *list = new List<int>;
    
    list->insertNode(5);
    list->insertNode(6);
    list->insertNode(7);
    
    list->printList();
    
    return 0;
    
    
    
}
