#include <iostream>
using namespace std;
void modifyPointer(int* ptr) {
 *ptr = 200;
}
int main() {
 int* ptr=nullptr;
 modifyPointer(ptr);
 cout << *ptr << endl;
 return 0;
}