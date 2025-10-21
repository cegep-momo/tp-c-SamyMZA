#include <sstream>
#include <algorithm>

#include <book.h>

using namespace std;


//COnstructeur def
Book::Book() : title("") , author("") , isbn("") {}

// Constructeur avec param

Book::Book(const string& title,const string& author,const string&isbn) : title(title) , author(author) , isbn(isbn) {}

// Getter

// Setters

// Methods