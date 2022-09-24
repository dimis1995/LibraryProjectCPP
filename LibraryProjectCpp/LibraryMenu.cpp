//
//  LibraryMenu.cpp
//  LibraryProjectCpp
//
//  Created by Dimitris Delis on 23/9/22.
//

#include "LibraryMenu.hpp"

void LibraryMenu::setBusinessController(BusinessController controller) {
    this->controller = controller;
}

void LibraryMenu::displayHome() {
    cout << "--------------------------------" << endl;
    cout << "--------    H O M E      -------" << endl;
    cout << "--------------------------------" << endl;
    
    int choice = 0;
    cout << "Here is a list of options:" << endl;
    cout << "1) To look at the size of the library" << endl;
    cout << "2) To get a specific book" << endl;
    cout << "3) To add a book" << endl;
    cout << "4) To exit the program" << endl;
    while (choice > 4 || choice <= 0) {
        cout << "Enter your choice : ";
        cin >> choice;
        if (choice > 4 || choice <= 0) {
            cout << "You need to enter a valid choice" << endl;
        }
    }
    displayChoice(choice);
}

void LibraryMenu::displayBook(Book book) {
    cout << "--------------------------------" << endl;
    cout << book.toString() << endl;
    cout << "--------------------------------\n" << endl;
}

void LibraryMenu::displayChoice(int choice) {
    string name;
    switch (choice) {
        case 1:
            // take a look at the size of library
            cout << "--------------------------------" << endl;
            cout << "-----    LIBRARY LIST      -----" << endl;
            cout << "--------------------------------" << endl;
            this->controller.printAllBooks();
            cout << "Library Size : " << this->controller.getLibrarySize() << endl;
            cout << "\n";
            break;
        case 2:
            // get a specific book
            cout << "Enter the name of the book : ";
            cin.clear();
            getline(cin >> ws, name);
            displayBook(this->controller.findBook(name));
            break;
        case 3:
            // add a book
            cout << "Enter the name of the book : ";
            cin.clear();
            getline(cin >> ws, name);
            if (this->controller.addBook(name)) {
                cout << "Book successfully added to the library" << endl;
            } else {
                cout << "Oh no something went wrong" << endl;
            }
            break;
        case 4:
            cout << "--------------------------------" << endl;
            cout << "--------    E X I T      -------" << endl;
            cout << "--------------------------------" << endl;
            return;
        default:
            throw "Uknown Error";
            break;
    }
    displayHome();
}
