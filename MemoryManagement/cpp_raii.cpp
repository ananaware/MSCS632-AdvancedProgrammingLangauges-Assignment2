// C++: manual new/delete and RAII with smart pointers
#include <iostream>
#include <memory>

int main() {
    // Manual new/delete (error-prone)
    int* p = new int(42);
    std::cout << *p << "\n";
    delete p;    // forgetting this leaks memory
    p = nullptr; // avoid dangling pointer

    // Preferred modern C++: RAII
    auto arr = std::make_unique<int[]>(3);
    arr[0] = 1; arr[1] = 2; arr[2] = 3;
    std::cout << (arr[0] + arr[1] + arr[2]) << "\n"; // 6 (auto-freed on scope exit)
    return 0;
}
