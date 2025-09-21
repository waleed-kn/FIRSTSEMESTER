#include <iostream>
using namespace std;
void modifyArray(int* arr) {
 arr[2] = 99;
}
int main() {
 int* arr = new int[5];
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 modifyArray(arr);
 cout << arr[2] << endl; // What will be printed?
 delete[] arr;
 return 0;
}