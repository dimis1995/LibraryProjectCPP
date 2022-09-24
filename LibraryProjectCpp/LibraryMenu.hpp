//
//  LibraryMenu.hpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#ifndef LibraryMenu_hpp
#define LibraryMenu_hpp

#include <stdio.h>
#include <iostream>
#include "Book.hpp"
#include "BusinessController.hpp"

using namespace std;

class LibraryMenu {
public:
    void setBusinessController(BusinessController controller);
    void displayList();
    void displayHome();
    void displayChoice(int choice);
private:
    void displayBook(Book book);
    BusinessController controller;
};

#endif /* LibraryMenu_hpp */
