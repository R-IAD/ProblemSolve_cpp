#include <iostream>
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
    }    cout<<"Im here sort \n";
}
bool SearchForNumber(array<int, SIZE> &arr, int num)
{
    int start{};
    bool res{false};
    int end{SIZE};
    int mid{SIZE / 2};
    
    incrementalSort(arr);

    while (arr[mid] != num)
    {
        cout<< "11\n";
        (num < arr[mid])?end = mid - 1:start = mid + 1;
        mid = (end + start) / 2;

        if (end==start||end==(start+1) && arr.size()%2)
        break;
    }
    if (arr[mid]==num)
    {
        res = 1;
    }
   return res;

}


int main()
{
    int num{1};
    
    array<int, SIZE> arr{50, 29, 35, 39, 15, 42, 21, 11, 9}; //{9, 5, 6, 7, 3, 8, 4, 2, 1, 0}
    //bool res {SearchForNumber(arr, num)};
    cout << arr.data();
   // cout << boolalpha<<"The number " << num << " is at index: " <<res ;
}