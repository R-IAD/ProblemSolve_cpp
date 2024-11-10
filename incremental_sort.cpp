#include <iostream>
#include <string>
#include <array>
#define SIZE 10
using namespace std;

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
    array<int, SIZE> arr2{1, 4, 3, 2, 5, 6, 18, 7, 9, 20};
    incrementalSort(arr2);
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr2[i] << ' ';
    }
}