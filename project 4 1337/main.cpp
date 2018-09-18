#include <iostream>
#include <string>

#include "Book.h"
#include "Bookshelf.h"

using namespace std;

int main(void) {
	Bookshelf bookshelf = Bookshelf();
	Book book;

	try {
		//Attempt to retrieve the first book on the shelf
		cout << "Retrieve book at position 0" << endl;
		book = bookshelf.bookAt(0);
		cout << "Book has title '" << book.getTitle() << "' with author '" << book.getAuthor() << "'" << endl;
	}
	catch (string s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	try {
		// Add a book
		cout << "Adding The Three-Body Problem" << endl;
		bookshelf.add("The Three-Body Problem", "Cixin Liu");

		// Add a second book
		cout << "Adding The Dark Forest" << endl;
		book = Book("The Dark Forest", "Cixin Liu");
		bookshelf.add(book);

		// Add several copies of a book
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");

		cout << "There are " << bookshelf.getSize() << " books on the shelf" << endl;
	}
	catch (string s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	try {
		// Add another couple books
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");
		cout << "Adding Seveneves" << endl;
		bookshelf.add("Seveneves", "Neal Stephenson");

		cout << "There are " << bookshelf.getSize() << " books on the shelf" << endl;
	}
	catch (string s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}


	try {
		// Remove a book
		cout << "Remove book by Cixin Liu" << endl;
		bookshelf.removeByAuthor("Cixin Liu");

		cout << "There are " << bookshelf.getSize() << " books on the shelf" << endl;
	}
	catch (string s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	try {
		// Remove a book
		cout << "Remove The Three-Body Problem" << endl;
		bookshelf.removeByTitle("The Three-Body Problem");

		cout << "There are " << bookshelf.getSize() << " books on the shelf" << endl;
	}
	catch (string s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}


 	try {
		// Remove several book
		cout << "Remove Seveneves" << endl;
		bookshelf.removeByTitle("Seveneves");
		cout << "Remove Seveneves" << endl;
		bookshelf.removeByTitle("Seveneves");
		cout << "Remove Seveneves" << endl;
		bookshelf.removeByTitle("Seveneves");
		cout << "Remove Seveneves" << endl;
		bookshelf.removeByTitle("Seveneves");


		cout << "There are " << bookshelf.getSize() << " books on the shelf" << endl;
	}
	catch (string s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}
	try {
		// Remove a book
		cout << "Remove book by Cixin Liu" << endl;
		bookshelf.removeByAuthor("Cixin Liu");

		cout << "There are " << bookshelf.getSize() << " books on the shelf" << endl;
	}
	catch (string s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	try {
		// dump the bookshelf
		cout << endl;
		cout << "There are " << bookshelf.getSize() << " books on the shelf" << endl;
		cout << "The bookshelf contains the following books (the order does not matter):" << endl;
		for (unsigned currentBook = 0; currentBook <= bookshelf.getSize(); ++currentBook) {
			cout << "Book has title '" << bookshelf.bookAt(currentBook).getTitle() << "' with author '"
				<< bookshelf.bookAt(currentBook).getAuthor() << "'" << endl;
		}
	}
	catch (string s) {
		cout << "EXCEPTION CAUGHT: " << s << endl;
	}

	cout << "Hit <enter>";
	cin.get();

	return 0;
}
