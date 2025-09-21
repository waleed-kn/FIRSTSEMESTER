#include <iostream>
using namespace std;
void print(int a) {
 cout << "Integer: " << a << endl;
}
void print(double a) {
 cout << "Double: " << a << endl;
}
int main() {
 print(10);
 print(10.5);
 return 0;
}
