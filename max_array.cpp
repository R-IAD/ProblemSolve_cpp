#include <iostream>
#include <string>
#include <array>
#define SIZE 7
using namespace std;

int getmax(array<int, SIZE> arr)
{
    int maxnum = arr[0];
    // arr[1] = 66;
    for (int i = 0; i < arr.size(); i++)
    {
        if (maxnum < arr[i])
            maxnum = arr[i];
    }
    return maxnum;
}

int get2ndmax(array<int, SIZE> arr)
{
    int scndmax = 0;
    int maxx = getmax(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        if (scndmax < arr[i] && arr[i] != maxx)
            scndmax = arr[i];
    }
    return scndmax;
}

int geet2ndmax(array<int, SIZE> arr)
{
    int max = arr[0], secmax = arr[1];
    if (max < secmax)
        swap(max, secmax);

    for (int i = 2; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            secmax = max;
            max = arr[i];
        }

        else if (arr[i] > secmax)
            secmax = arr[i];
    }
    return secmax;
}

int main()
{
    array<int, SIZE> arr{1, 33, 5, 3, 44, 33, 65};
    cout << get2ndmax(arr) << '\n';
    cout << geet2ndmax(arr) << '\n';
    return 127;
}