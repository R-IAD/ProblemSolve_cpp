#include <iostream>
#include <array>
#include <math.h>
#define Size 100
using namespace std;

void Get_Prime(array<bool, Size> &arr)
{
    int i{}, j{};
    int counter{};
    for (i = 0; i < sqrt(Size); i++)
    {
        if (arr[i])
        {
            for (j = i + 1; j < Size; j++)
                if (arr[j] && (j % i) == 0)
                {
                    arr[j] = false;
                }
        }
    }

    for (auto k : arr)
    {

        if (k)
            cout << counter << ' ';
        counter++;
    }
}

void Set_True(array<bool, Size> &arr)
{
    for (int i{}; i < Size; i++)
    {
        (i > 1) ? arr[i] = 1 : arr[i] = 0;
    }
}

int main()
{
    array<bool, Size> arr;

    Set_True(arr);
    Get_Prime(arr);
}