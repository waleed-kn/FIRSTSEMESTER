#include <iostream>
using namespace std;
void allocateMemory() {
 int* ptr = new int(50);
 delete ptr;
 cout << *ptr << endl;
}
int main() {
 allocateMemory();
 return 0;
}