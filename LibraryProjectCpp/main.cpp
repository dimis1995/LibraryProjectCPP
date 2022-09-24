//
//  main.cpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#include <iostream>
#include "Book.hpp"
#include "BookLibrary.hpp"
#include "LibraryMenu.hpp"
#include "BusinessController.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    LibraryMenu menu;
    BookLibrary library = BookLibrary();
    Book book("name1");
    library.addBook(book);
    BusinessController controller;
    controller.setLibrary(library);
    menu.setBusinessController(controller);
    
    menu.displayHome();
    
    
    return 0;
}
