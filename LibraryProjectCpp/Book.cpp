//
//  Book.cpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#include "Book.hpp"
#include <iostream>

using namespace std;

Book:: Book(string newName) {
    setName(newName);
}

void Book::setName(string newName) {
    name = newName;
}

string Book::getName() {
    return name;
}

string Book::toString() {
    string str = "Book : ";
    str+=name;
    return str;
}


