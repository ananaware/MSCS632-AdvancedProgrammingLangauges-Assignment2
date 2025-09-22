// C++ : Calculate the sum of an array (fixed version)
#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = 0;                  // ✅ corrected
    for (int i = 0; i < size; i++)  // ✅ corrected
        total += arr[i];
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[0]); // ✅ corrected
    int result = calculateSum(numbers, size);
    cout << "Sum in C++: " << result << endl;        // ✅ corrected
    return 0;                                        // ✅ corrected
}
