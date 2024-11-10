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

void add9999(string &str)
{
    string temp{""}, temp2{""};
    int res{};
    int i{};
    if (str.length() > 5)
    {
        for (int i = 0; i < (str.length()); i++)
        {
            if (i < (str.length() - 5))
                temp.append(1, str[i]);
            else
                temp2.append(1, str[i]);
        }
        str.clear();
        res = strtoint(temp2) + 9999;
        str = temp + to_string(res);
    }
    else
    {
        res = strtoint(str) + 9999;
        str = to_string(res);
    }
}

int main()
{
    string str{"12232343454525552433623456"};
    add9999(str);
    cout << str;

    return 0;
}