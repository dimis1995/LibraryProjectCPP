//
//  BusinessController.hpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#ifndef BusinessController_hpp
#define BusinessController_hpp

#include <stdio.h>
#include <string>
#include "Book.hpp"
#include "BookLibrary.hpp"
#include <vector>

class BusinessController {
public:
    void setLibrary(BookLibrary booklibrary);
    void printAllBooks();
    bool addBook(string name);
    long getLibrarySize();
    Book findBook(string name);
private:
    BookLibrary library;
};

#endif /* BusinessController_hpp */
