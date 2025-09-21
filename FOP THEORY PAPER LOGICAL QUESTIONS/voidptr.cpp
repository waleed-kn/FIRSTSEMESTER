#include <iostream>
using namespace std;
void printValue(void* ptr) {
 cout << *(int*)ptr << endl;
}
int main() {
 int x = 100;
 void* ptr = &x;                
 printValue(ptr);
 return 0;
}