#include <iostream>
using namespace std;

class Book {
public:
    string name;
    string writer;
};

int main() {
    Book* ref = new Book;
    ref->name = "Programming Fundamentals";
    ref->writer = "Dr. Hafeez Anwar";

    cout << "Book Title: " << ref->name << endl;
    cout << "Book Author: " << ref->writer << endl;

    delete ref;
    ref = nullptr;
}
