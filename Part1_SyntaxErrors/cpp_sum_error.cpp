// C++ : Calculate the sum of an array with intentional errors
#include <iostream>
using namespace std;

int calculateSum(int arr[], int size) {
    int total = o;                 // <-- ERROR: 'o' not declared
    for (int i = o; i < size; i++) // <-- ERROR: 'o' not declared
        total += arr[i];
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = sizeof(numbers) / sizeof(numbers[o]); // <-- ERROR: 'o' not declared
    int result = calculateSum(numbers, size);
    cout << "Sum in C++" " << result << endl;        // <-- ERROR: bad string/<<
    return o;                                        // <-- ERROR: 'o' not declared
}
