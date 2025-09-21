#include <iostream>
using namespace std;
struct Book {
 string title;
 int pages;
 Book(string t, int p) : title(t), pages(p) {}
};
int main() {
 Book b1("C++ Programming", 300);
 cout << b1.title << " " << b1.pages << endl;
 return 0;
}