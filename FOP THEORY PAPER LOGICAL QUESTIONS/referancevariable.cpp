#include <iostream>
using namespace std;
void adjustValue(int& x) {
 x += 20;
}
int main() {
 int a = 15;
 adjustValue(a);
 a = 10;
 cout<<a<<endl;
 return 0;
}
