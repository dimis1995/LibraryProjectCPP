//
//  BusinessController.cpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#include "BusinessController.hpp"

void BusinessController::setLibrary(BookLibrary booklibrary) {
    this->library = booklibrary;
}

void BusinessController::printAllBooks() {
    for (auto t : library.getBooks()) {
        std::cout << t.toString() << endl;
    }
}

long BusinessController::getLibrarySize() {
    return this->library.getLibSize();
}

Book BusinessController::findBook(string name) {
    try {
        Book book = this->library.getBook(name);
        return book;
    } catch (...) {
        throw "Book not found";
    }
}

bool BusinessController::addBook(string name) {
    Book book(name);
    try {
        this->library.addBook(book);
    } catch (...) {
        return false;
    }
    return true;
}
