#include <iostream>
#include <array>

using namespace std;
#define SIZE 9

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

int SearchForNumber(array<int, SIZE> &arr, int num)
{
    int start{};
    int end{SIZE};
    int mid{SIZE / 2};

    incrementalSort(arr);
    while (arr[mid] != num)
    {
        (num < arr[mid])?end = mid - 1:start = mid + 1;
        mid = (end + start) / 2;
    }
    return mid;
}

int main()
{
    int num{9};
    array<int, SIZE> arr{50, 29, 35, 39, 15, 42, 21, 11, 9}; //{9, 5, 6, 7, 3, 8, 4, 2, 1, 0}
    cout << "The number " << num << " is at index: " << SearchForNumber(arr, num);
}