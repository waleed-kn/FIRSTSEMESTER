#include<iostream>
using namespace std;

// Function to swap two integers using reference parameters
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    
    // Before swapping
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    
    // Swap using reference
    swap(x, y);
    
    // After swapping
    cout << "After swap: x = " << x << ", y = " << y << endl;
    
    return 0;
}
