//
//  Contact.cpp
//  node
//
//  Created by Charles Panter on 1/26/19.
//  Copyright © 2019 Charles Panter. All rights reserved.
//

#include <stdio.h>
#include "Contact.h"

Contact::Contact(std::string n):name(n), next(NULL){}

std::ostream& operator<<(std::ostream& os, const Contact& c){
    return os << "Name: " << c.name;
}
