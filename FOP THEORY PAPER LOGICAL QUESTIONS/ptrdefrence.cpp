#include <iostream>
using namespace std;
void changeValue(int* ptr) {
 *ptr = 100;
}
int main() {
 int* ptr = nullptr;
 changeValue(ptr);
 cout << *ptr << endl;
 return 0;
}