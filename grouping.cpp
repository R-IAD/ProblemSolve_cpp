#include <iostream>
#include <string>

using namespace std;

void grouping(string &str)
{
    string temp{};
    int counter{1};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == str[i + 1])
        {
            counter++;
        }
        else
        {
            temp.insert(temp.end(), counter, str[i]);
            temp += " ";
            counter = 1;
        }
    }
    str = temp;
}

int main()
{
    string str{"aerfg"};
    grouping(str);
    cout << str;
}