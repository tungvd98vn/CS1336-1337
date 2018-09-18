// CS 1337.003 Project 4 Tung Vu tdv160130
#ifndef BOOK_H
#define BOOK_H
#include <string>


class Book{
private:
    std::string title;
    std::string author;

public:
    Book(){
        title = "empty";
        author = "empty";
    }

    Book (std::string t, std::string a){
        title = t;
        author = a;
    }

    void setTitle (std::string t){title = t;}; // mutators
    void setAuthor (std::string a){author = a;};
    std::string getTitle() const {return title;}; // accessors
    std::string getAuthor() const {return author;};
    ~Book(){};
};

#endif // BOOK_H
