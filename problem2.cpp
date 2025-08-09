#include <iostream>
#include <vector>
using namespace std;

// Function to reverse the array
vector<int> reverseArray(vector<int> arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; i++) {
        swap(arr[i], arr[n - i - 1]);
    }
    return arr;
}

int main() {
    int n;
    cin >> n; // Number of elements
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> reversed = reverseArray(arr);
    
    for (int i = 0; i < reversed.size(); i++) {
        cout << reversed[i] << " ";
    }
    cout << endl;
    
    return 0;
}
