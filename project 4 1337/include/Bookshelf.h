// CS 1337.003 Project 4 Tung Vu tdv160130
#ifndef BOOKSHELF_H
#define BOOKSHELF_H
#include <string>
#include "Book.h"


class Bookshelf{
private:
    Book b[10];

public:
    static int count;
    static bool already;
    Bookshelf(){ // constructor
        for (int i = 0; i < 10; i++){
            b[i] = Book();
        }
    }
    void add(std::string _title, std::string _author); // required member functions
    void add(const Book& book);
    void removeByTitle(std::string _title);
    void removeByAuthor(std::string _author);
    unsigned getSize() const;
    const Book& bookAt(unsigned position) const;
    ~Bookshelf(){};
};
#endif // BOOKSHELF_H
