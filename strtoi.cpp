#include <iostream>
#include <string>
#include <math.h>
#define ASCII_DIFF 48
using namespace std;

int strtoint(string &str)
{
    int result{0};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
            continue;

        result += (str[i] - ASCII_DIFF) * pow(10, (str.length() - (i + 1)));
    }
    return result;
}

int main()
{
    string str{"00101"}, str2{"2"};
    cout << strtoint(str) + strtoint(str2) << '\n';
    return 0;
}