#ifndef AQS_H
#define AQS_H

#include <cstddef>
#include <concepts>
#include <type_traits>

template <typename T>
concept Comparable = requires(T a, T b) {
    { a > b } -> std::convertible_to<bool>;
    { a < b } -> std::convertible_to<bool>;
    { a == b } -> std::convertible_to<bool>;
};

template <typename T>
struct has_iterator {
private:
    template <typename C> static char test(typename C::iterator*);
    template <typename C> static int  test(...);
public:
    enum { value = sizeof(test<T>(0) == sizeof(char)) };
};

template <typename C>
concept Iterable = requires(C) {
    has_iterator<C>::value;
};

template <Iterable Container>
requires Comparable<typename Container::value_type>
void aqs(Container &container) { }

#endif