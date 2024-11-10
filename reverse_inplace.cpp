#include <iostream>
#include <string>
#include <array>
#define SIZE 4
using namespace std;

void reverse_inplace(array<int, SIZE> &arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        swap(arr[i], arr[SIZE - i - 1]);
    }
}

int main()
{
    array<int, SIZE> arr2{1, 2, 4, 5};
    reverse_inplace(arr2);
    for (int i = 0; i < SIZE; i++)
    {
        cout << arr2[i] << ' ';
    }
}