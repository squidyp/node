//
//  Contact.h
//  node
//
//  Created by Charles Panter on 1/26/19.
//  Copyright © 2019 Charles Panter. All rights reserved.
//

#ifndef Contact_h
#define Contact_h
#include <iostream>
#include <string>

class Contact{
    friend std::ostream& operator<< (std::ostream& os, const Contact& c);
    friend class ContactList;
    
public:
    Contact(std::string name = "none");
    
private:
    std::string name;
    Contact* next; 
};

#endif /* Contact_h */
