#include <iostream>
struct type
{
    type() : i(3) {}
    void m1(int v) const
    {
        // this->i = v; // error C3490: ’i’ cannot be modified -- accessed through a const object
        const_cast<type *>(this)->i = v; // Okay as long as the type object isn’t const
    }
    int i;
};

int main()
{
    int i = 3; // i is not declared const
    const int &cref_i = i;

    const_cast<int &>(cref_i) = 4; // Okay: modifies i
    std::cout << "i = " << i << '\n';

    type t; // note, if this is const type t;, then t.m1(4); may be undefined behavior
    t.m1(4);
    std::cout << "type::i = " << t.i << '\n';

    const int j = 3; // j is declared const
    int *pj = const_cast<int *>(&j);
    *pj = 4; // undefined behavior! Value of j and *pj may different
    std::cout << j << " " << *pj << std::endl;

    return 0;
}