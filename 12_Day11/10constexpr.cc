// constexpr indicates that the value, or return value, is constant and, 
// where possible, is computed at compile time. A constexpr integral value 
// can be used wherever a const integer is required, such as in template 
// arguments and array declarations.03-Aug-2021



// #include <iostream>
// using namespace std;

// constexpr float exp(float x, int n)
// {
//     return n == 0 ? 1 :
//         n % 2 == 0 ? exp(x * x, n / 2) :
//         exp(x * x, (n - 1) / 2) * x;
// }

// int main()
// {    
//     constexpr float x = 42.0;
//     constexpr float y{108};
//     constexpr float z = exp(5, 3);
//     // constexpr int i; // Error! Not initialized
//     int j = 0;
//     // constexpr int k = j + 1; //Error! j not a constant expression

//     return 0;
// }


#include <iostream>
using namespace std;

// Pass by value
constexpr float exp(float x, int n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp(x * x, n / 2) :
        exp(x * x, (n - 1) / 2) * x;
}

// Pass by reference
constexpr float exp2(const float& x, const int& n)
{
    return n == 0 ? 1 :
        n % 2 == 0 ? exp2(x * x, n / 2) :
        exp2(x * x, (n - 1) / 2) * x;
}

// Compile-time computation of array length
template<typename T, int N>
constexpr int length(const T(&)[N])
{
    return N;
}

// Recursive constexpr function
constexpr int fac(int n)
{
    return n == 1 ? 1 : n * fac(n - 1);
}

// User-defined type
class Foo
{
public:
    constexpr explicit Foo(int i) : _i(i) {}
    constexpr int GetValue() const
    {
        return _i;
    }
private:
    int _i;
};

int main()
{
    // foo is const:
    constexpr Foo foo(5);
    // foo = Foo(6); //Error!

    // Compile time:
    constexpr float x = exp(5, 3);
    constexpr float y { exp(2, 5) };
    constexpr int val = foo.GetValue();
    constexpr int f5 = fac(5);
    const int nums[] { 1, 2, 3, 4 };
    const int nums2[length(nums) * 2] { 1, 2, 3, 4, 5, 6, 7, 8 };

    // Run time:
    cout << "The value of foo is " << foo.GetValue() << endl;
}