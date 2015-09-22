//
//  main.cpp
//  baseDataStructs
//
//  Created by Sam Kreter on 9/9/15.
//  Copyright (c) 2015 Sam Kreter. All rights reserved.
//

#include <iostream>
#include <string>

#include "List.h"
#include "List.cpp"

using namespace std;

int main(int argc, const char * argv[]) {

    
    List<string> *list = new List<string>;
    
    
    string s1 = "hey";
    string s2 = "world";
    string s3 = "bro";
    
    list->insertNode(s1);
    list->insertNode(s2);
    list->insertNode(s3);
    
    list->printList();
    
    return 0;
}
