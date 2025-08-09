#include <iostream>
using namespace std;

// Function to compute the sum of two integers
int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cin >> a >> b;       // Read input
    cout << sum(a, b);   // Output sum
    return 0;
}
