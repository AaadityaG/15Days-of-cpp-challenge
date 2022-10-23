#include <iostream>

typedef unsigned int size_t; //#include <bits/C++config.h>
namespace std
{
    template <class _E>
    class initializer_list
    { // initializer list
    public:
        typedef _E value_type;
        typedef const _E &reference;
        typedef const _E &const_reference;
        typedef size_t size_type;
        typedef const _E *iterator;
        typedef const _E *const_iterator;

    private:
        iterator _M_array;
        size_type _M_len;
        // The compiler can call a private constructor
        // constexpr defines compile-time constant expressions - TBD later
        constexpr initializer_list(const_iterator __a, size_type __l) : _M_array(__a), _M_len(__l) {}

    public:
        constexpr initializer_list() noexcept : _M_array(0), _M_len(0) {}
        constexpr size_type size() const noexcept { return _M_len; }               // Number of elements
        constexpr const_iterator begin() const noexcept { return _M_array; }       // First element
        constexpr const_iterator end() const noexcept { return begin() + size(); } // One past last element
    };
};