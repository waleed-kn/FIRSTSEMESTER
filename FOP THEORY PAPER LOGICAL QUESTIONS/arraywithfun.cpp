#include <iostream>
using namespace std;
int* createArray() {
 int arr[3] = {1, 2, 3};
 return arr;
}
int main() {
 int* ptr = createArray();
 cout << ptr[0] << endl;
 return 0;
}