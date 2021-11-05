//
//  main.cpp
//  node
//
//  Created by Charles Panter on 1/26/19.
//  Copyright © 2019 Charles Panter. All rights reserved.
//

#include "ContactList.h"

int main() {
    ContactList* cl1 = new ContactList();
    
    std::string name;
    
    while(true){
        std::cout<<"Enter name or q to quite." << std::endl;
        std::cin >> name;
        if(name == "q"){
            break;
        }
        cl1->addToHead(name);
    }
    cl1->PrintList();
    return 0;
}
