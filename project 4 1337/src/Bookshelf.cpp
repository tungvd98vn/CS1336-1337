// CS 1337.003 Project 4 Tung Vu tdv160130
#include "Bookshelf.h"
#include <string>
#include <sstream>
int Bookshelf::count = 0;
bool Bookshelf::already = false;

void Bookshelf::add(std::string _title, std::string _author){
    if (count >= 10){
        std::string ex = "There is not enough room on the bookshelf to add another book" ;
        throw ex;
    }

    b[count].setTitle(_title);
    b[count].setAuthor(_author);
    count++;
    already = true;

}
void Bookshelf::add(const Book& book){
    if (count >= 10){
        std::string ex = "There is not enough room on the bookshelf to add another book";
        throw ex;
    }
    b[count] = book;
    count++;
    already = true;
}
void Bookshelf::removeByTitle(std::string _title){
    bool exist = false;
    for (unsigned i = 0; i < 10; i++){ // search though array for the title
        if (b[i].getTitle() == _title){
            Book temp;
            temp = b[count-1];
            b[i] = temp;
            b[count-1] = Book();
            count--;
            exist = true;
            break;
        }
    }
    if (exist == false){
        std::string ex = "Cannot find book on shelf with title: " + _title;
        throw ex;
    }

}

void Bookshelf::removeByAuthor(std::string _author){
    bool exist = false;
    for (unsigned i = 0; i < 10; i++){ // search though array for the author
        if (b[i].getAuthor() == _author){
            Book temp;
            temp = b[count-1];
            b[i] = temp;
            b[count-1] = Book();
            count--;
            exist = true;
            break;
        }
    }
    if (exist == false){
        std::string ex = "Cannot find book on shelf with title: " + _author;
        throw ex;
    }
}

unsigned Bookshelf::getSize() const {
    return count;
}

const Book& Bookshelf::bookAt(unsigned position) const{
    if (position > count-1 || position < 0 || already == false || (count == 0 && already == true)){
        std::stringstream ss;
        ss << "Cannot retrieve a book that has a location greater than the number of books on the shelf: " << count;
        std::string ex = ss.str();
        throw ex;
    }
    return b[position];
}
