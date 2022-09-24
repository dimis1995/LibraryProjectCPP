//
//  Book.hpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#ifndef Book_hpp
#define Book_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Book{
private:
    string name;
public:
    Book();
    Book(string name);
    void setName(string newName);
    string getName();
    string toString();
    
};

#endif /* Book_hpp */
