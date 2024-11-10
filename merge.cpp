#include <iostream>
#include <string>
#include <array>
#define SIZE 5
using namespace std;

void Merge(array<int, SIZE> &arr1, array<int, SIZE> &arr2, array<int, SIZE * 2> &result)
{
    int idx1 = 0, idx2 = 0, res = 0;

    while (idx1 < arr1.size() && idx2 < arr2.size())
    {
        if (arr1[idx1] < arr2[idx2])
            result[res++] = arr1[idx1++];
        else
            result[res++] = arr2[idx2++];
    }

    while (idx1 < SIZE)
    {
        result[res++] = arr1[idx1++];
    }

    while (idx2 < SIZE)
    {
        result[res++] = arr2[idx2++];
    }
}

void incrementalSort(array<int, SIZE> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int cpy = arr[i];
        int j = i - 1;
        for (j; j >= 0; j--)
        {
            if (arr[j] < cpy)
                break;
            else
            {
                arr[j + 1] = arr[j];
            }
        }
        arr[j + 1] = cpy;
    }
}

int main()
{
    array<int, SIZE> arr2{1, 8, 3, 10, 5};
    array<int, SIZE> arr3{23, 4, 2, 30, 15};
    array<int, SIZE * 2> Result;
    incrementalSort(arr2);
    incrementalSort(arr3);

    Merge(arr2, arr3, Result);
    for (int i = 0; i < SIZE * 2; i++)
    {
        cout << Result[i] << ' ';
    }
}