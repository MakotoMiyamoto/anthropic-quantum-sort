#include "aqs.hpp"

#include <iostream>
#include <vector>

int main() {
    auto vec = std::vector<int>{ 1, 2, 3, 4, 5 };
    aqs(vec);

    std::cout << "{ ";
    for (auto &&x : vec) { std::cout << x << " "; };
    std::cout << "}\n";
}
