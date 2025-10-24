#include <sstream>
#include <algorithm>

#include "book.h"

using namespace std;

// COnstructeur def
Book::Book() : title(""), author(""), isbn(""), isAvailable(true), borrowerName("") {}

// Constructeur avec param

Book::Book(const string &title, const string &author, const string &isbn) : title(title), author(author), isbn(isbn), isAvailable(true), borrowerName("") {}

// Getter

string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return isbn; }
bool Book::getAvailability() const { return isAvailable; }
string Book ::getBorrowerName() const { return borrowerName; }
// Setters

void Book::setTitle(const string &title) { this->title = title; }
void Book::setAuthor(const string &author) { this->author = author; }
void Book::setISBN(const string &isbn) { this->isbn = isbn; }
void Book::setAvailability(bool available) { this->isAvailable = available; }
void Book::setBorrowerName(const string &name) { this->borrowerName = name; }

// Methods

void Book::checkOut(const string &borrower)
{
   setBorrowerName(borrower);
   setAvailability(false);
}

void Book::returnBook()
{
   setBorrowerName("");
   setAvailability(true);
}

string Book::toString() const
{
   return "Titre: " + getTitle() + "\nAuteur: " + getAuthor() + "\nISBN: " + getISBN() + "\nStatus: " + (getAvailability() ? "Disponible" : "Emprunter par : " + getBorrowerName());
}

string Book::toFileFormat() const
{
   return title + "|" + author + "|" + isbn + "|" + (isAvailable ? "1" : "0") + "|" + borrowerName;
}

void Book::fromFileFormat(const string &line)
{
   stringstream ss(line);
   string token;
   string availbeStr;
   
   
   getline(ss, title, '|');
   getline(ss, author, '|');
   getline(ss, isbn, '|');
   getline(ss, availbeStr, '|');
   getline(ss, borrowerName, '|');
   
   if (availbeStr == "1")
   {
      isAvailable = true;
   }else{
      isAvailable = false;
   }
}