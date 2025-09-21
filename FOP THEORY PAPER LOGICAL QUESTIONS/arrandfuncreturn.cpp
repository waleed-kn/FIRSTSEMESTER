#include <iostream>
using namespace std;
int* createArray() {
 int arr[5] = {1, 2, 3, 4, 5};
 return arr;
}
int main() {
 int* ptr = createArray();
 cout << ptr[0] << endl;
 return 0;
}

