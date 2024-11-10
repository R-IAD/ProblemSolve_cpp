#include <iostream>
#include <string>

using namespace std;

void substring(string &str)
{
    string temp{""};

    int i = 0;
    int j = 0;
    for (i = 0; i < str.length(); i++)
    {
        cout << '\n';

        for (j = i; j < str.length(); j++)
        {
            temp.append(1, str[j]);
            cout << temp + ", ";
        }
        temp.clear();
    }
}

int main()
{

    string str{"123a"};
    substring(str);
}