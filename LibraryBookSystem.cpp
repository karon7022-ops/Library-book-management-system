#include <iostream>
#include <string>
using namespace std;

class Book {
    string title, author;
    int copies;

public:
    void inputDetails() {
        cout <<"Enter book title: ";
        getline(cin, title);

        cout <<"Enter author name: ";
        getline(cin, author);

        cout <<"Enter number of copies: ";
        cin >>copies;
    }

    void borrowBook() {
        if (copies > 0) {
            cout <<"Book borrowed successfully!\n";
        } else {
            cout <<"No copies available!\n";
        }
    }

    void displayDetails() {
        cout<<"============================="<<endl;
        cout <<        "--- Book Details ---";
        cout<<"============================="<<endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies available: " << copies << endl;
        cout<<"============================="<<endl;
    }
};

int main() {
    Book b;

    b.inputDetails();
    b.displayDetails();

    b.borrowBook();

    b.displayDetails();

    return 0;
}