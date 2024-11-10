#include <iostream>
#include <array>
#define SIZE 5

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
bool SearchForNumber(array<int, SIZE> &arr, int num)
{
    int start{};
    int end{SIZE};
    int mid{SIZE / 2};
    incrementalSort(arr);

    while (arr[mid] != num)
    {
        (num < arr[mid])?end = mid - 1:start = mid + 1;
        mid = (end + start) / 2;

        if (end==start||(end==(start+1) && arr.size()%2))
        break;
    }
    return (arr[mid]==num)?true:false;
}

bool findSum(array <int,SIZE> &arr , int target)
{
    int complement{};
    for (int i = 0; i < arr.size(); i++)
    {
        complement = target - arr[i];

        if (SearchForNumber(arr,complement))
            return true;
    }
    return false;
}


int main()
{
    int num{12};
    array<int, SIZE> arr{9, 5, 6, 7, 4}; //{9, 5, 6, 7, 3, 8, 4, 2, 1, 0}
    cout << boolalpha<<findSum(arr, num);    
}