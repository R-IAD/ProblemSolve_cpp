#include <iostream>
#include <string>

using namespace std;



string lessThan(string &str1, string &str2)
{
    return (str1 < str2) ? str1 : str2;
}

int main()
{
    string str1{"ca"}, str2{"ab"};
    cout << lessThan(str1, str2);
    return 127;
}