#include <iostream>

using namespace std;

template <class type>
type sum(type a, type b)
{
    return a + b;
}

int main()
{
    cout << sum(1, 2) << endl
         << sum(1.3, 2.4) << endl;
}