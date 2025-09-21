#include <iostream>
using namespace std;
int main() {
 int num = 10;
 int* const ptr = &num;
 *ptr = 24; // Valid
 // ptr = nullptr; // Error: cannot change the address of a const pointer
 cout << *ptr << endl;
 return 0;
}
