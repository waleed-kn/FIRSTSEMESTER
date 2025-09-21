#include <iostream>
using namespace std;
void changePointer(int** ptr) {
 **ptr = 50;
}
int main() {
 int num = 10;
 int* ptr = &num;
 int** ptr2 = &ptr;
 changePointer(ptr2);
 cout << num << endl;
 return 0;
}
