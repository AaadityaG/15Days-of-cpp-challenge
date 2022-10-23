#include <iostream>
#include <cstddef> // max_align_t
struct Storage
{ // alignof = 8, sizeof = 24
    char a;
    int b;
    double c;
    long long d;
};
struct alignas(std::max_align_t) AlignasStorage
{ // alignof = 16, sizeof = 32
    char a;
    int b;
    double c;
    long long d;
};
int main()
{
    std::cout << alignof(Storage) << ' ' << sizeof(Storage) << std::endl;
    std::cout << alignof(AlignasStorage) << ' ' << sizeof(AlignasStorage) << std::endl;
}
