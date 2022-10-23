// These are the ways of traversing vector

#include <iostream>
#include <vector>
using namespace std;

template<class T>

int main()
{    
    vector <int>v;
    for(int i = 0; i < v.size(); ++i) { /* use v[i] */ } // native int for size
    // for(vector<T>::size_type i = 0; i < v.size(); ++i) { /* use v[i] */ } // correct size_type
    // iterator style

    for(vector<T>::iterator p = v.begin(); p != v.end(); ++p) { /* use *p */ } // verbose

    for(vector<T>::value_type x : v){ 
        /* use x read-only */ 
    } 

    for(auto& x : v){ 
        /* use x read-write*/
    }

    for (auto x : v) 
        cout << x << endl;

    return 0;
}