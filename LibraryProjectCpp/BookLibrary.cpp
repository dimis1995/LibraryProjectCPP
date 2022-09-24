//
//  BookLibrary.cpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#include "BookLibrary.hpp"

BookLibrary::BookLibrary() {
    cout << "library created" << endl;
}

vector<Book> BookLibrary::getBooks() {
    return booksvector;
}

void BookLibrary::addBook(Book book){
    booksvector.push_back(book);
}

long BookLibrary::getLibSize(){
    return this->booksvector.size();
}

Book BookLibrary::getBook(string name) {
    for (auto t : booksvector) {
        if (name.compare(t.getName()) == 0) {
            return t;
        }
    }
    throw "book not found";
}
