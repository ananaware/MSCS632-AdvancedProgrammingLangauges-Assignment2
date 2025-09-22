// C++: lambdas, capture by value/reference, static typing
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int factor = 3;
    auto mul_by_factor = [factor](int x) { return x * factor; }; // capture by value

    std::vector<int> v{1, 2, 3};
    std::vector<int> out;
    out.reserve(v.size());
    std::transform(v.begin(), v.end(), std::back_inserter(out), mul_by_factor);

    for (int x : out) std::cout << x << " "; // 3 6 9
    std::cout << "\n";

    int sum = 0;
    std::for_each(v.begin(), v.end(), [&sum](int x) { sum += x; }); // capture by ref
    std::cout << "sum = " << sum << "\n"; // 6
    return 0;
}
