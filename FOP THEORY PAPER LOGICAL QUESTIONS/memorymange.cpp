#include <iostream>
using namespace std;
void allocateArray() {
 int* arr = new int[3];
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 delete[] arr;
 cout << arr[0] << endl; // What will happen here?
}
int main() {
 allocateArray();
 return 0;
}
