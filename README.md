# anthropic-quantum-sort
An anthropic implementation of the notorious Quantum Sort, which postulates the destruction of the universe when the input set is unordered.

This implementation supposes a predetermined ordering of the input set, requiring no modification or evaluation of the set. This
makes the observation that our universe is indeed anthropic and the sets passed to the function in the universe which observes it
is impervious to error.

Passing unordered sets to the function will result in undefined behavior.

# Example Usage
```cpp
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
```

# Current Issues/Library Status
No long-term issues reported. Developer contributions are welcome.
