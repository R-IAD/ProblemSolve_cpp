#include <iostream>
#include <array>
#define SIZE 5
using namespace std;

int sumQuery(int start, int final, array<int, SIZE> &arr)
{
    array<int, SIZE + 1> temp{};
    int ITERATOR{1};
    int sum{0};
    /*
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum += arr[j];
        }
        temp[i] = sum;
        sum = 0;
    }
*/
    for (int i : arr)
    {
        sum += i;
        temp[ITERATOR] = sum;
        ITERATOR++;
    }

    return (temp[final + 1] - temp[start]);
}

int main()
{
    array<int, SIZE> arr{1, 2, 5, 0, 4};
    cout << sumQuery(2, 4, arr);
}
