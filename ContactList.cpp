//
//  ContactList.cpp
//  node
//
//  Created by Charles Panter on 1/26/19.
//  Copyright © 2019 Charles Panter. All rights reserved.
//

#include <stdio.h>
#include "ContactList.h"

ContactList::ContactList():head(NULL), size(0){}

void ContactList::addToHead(const std::string&  name){
    Contact* n = new Contact(name);
    
    if(head == NULL){
        head = n;
        
    }else{
        n->next = head;
        head = n;
    }
    size++; 
}


void ContactList::PrintList(){
    Contact* tp =head;
    
    while(tp != NULL){
        std::cout << *tp << std::endl;
        tp = tp->next;
    }
}
