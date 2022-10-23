#include <iostream>
#include <list>
#include <vector>
#include <map>
using namespace std;

vector<double> v = { 1, 2, 3.456, 99.99 };
list<pair<string,string>> languages = {
    {"Nygaard","Simula"}, {"Richards","BCPL"}, {"Ritchie","C"}
}; 
map<vector<string>,vector<int>> years = {
    { {"Maurice","Vincent", "Wilkes"},{1913, 1945, 1951, 1967, 2000} },
    { {"Martin", "Ritchards"}, {1982, 2003, 2007} }, 
    { {"David", "John", "Wheeler"}, {1927, 1947, 1951, 2004} }
};

void f(initializer_list<int>);

int main()
{    
    f({1,2});
    f({23,345,4567,56789});
    f({});  // the empty list
    // f{1,2}; // error: function call ( ) missing
    years.insert({{"Bjarne","Stroustrup"},{1950, 1975, 1985}});

    return 0;
}