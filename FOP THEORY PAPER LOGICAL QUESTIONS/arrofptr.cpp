#include <iostream>
using namespace std;
void createMemoryLeak() {
 int* ptr = new int(50);
 // Forget to delete ptr, causing a memory leak
}
int main() {
 createMemoryLeak();
 // Program ends, memory is not freed
 return 0;
}