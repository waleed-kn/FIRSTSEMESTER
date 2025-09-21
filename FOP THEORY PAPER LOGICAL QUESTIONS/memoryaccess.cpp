#include <iostream>
using namespace std;
int* createPointer() {
 int* ptr = new int(10);
 delete ptr;
 return ptr;
}
int main() {
 int* p = createPointer();
 cout << *p << endl; // Undefined behavior: accessing deleted memory
 return 0;
}
