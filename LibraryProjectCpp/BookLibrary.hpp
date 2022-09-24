//
//  BookLibrary.hpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#ifndef BookLibrary_hpp
#define BookLibrary_hpp

#include <stdio.h>
#include <iostream>
#include "Book.hpp"
#include <string.h>
#include <sstream>
#include <vector>

using namespace std;

class BookLibrary {
public:
    BookLibrary();
    vector<Book> getBooks();
    void addBook(Book book);
    Book getBook(string name);
    long getLibSize();
    //Book getBook(int index);
private:
    vector<Book> booksvector;
};

#endif /* BookLibrary_hpp */
